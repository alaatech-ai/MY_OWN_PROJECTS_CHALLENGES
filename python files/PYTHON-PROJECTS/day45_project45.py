import cv2
import mediapipe as mp
import numpy as np

# ----------------------------------------------------------------------------
# 1. INITIALIZE MEDIAPIPE HANDS
# ----------------------------------------------------------------------------
# mp.solutions.hands gives us the pre-trained hand tracking model.
mp_hands = mp.solutions.hands
mp_drawing = mp.solutions.drawing_utils  # helper to draw hand landmarks (optional, for debugging)

hands = mp_hands.Hands(
    static_image_mode=False,      # False = treat input as a video stream (faster, uses tracking between frames)
    max_num_hands=1,              # only track one hand for simplicity
    min_detection_confidence=0.7, # how confident the model must be to detect a hand
    min_tracking_confidence=0.7   # how confident it must be to keep tracking an already-detected hand
)

# ----------------------------------------------------------------------------
# 2. INITIALIZE WEBCAM
# ----------------------------------------------------------------------------
cap = cv2.VideoCapture(0)  # 0 = default webcam
cap.set(3, 1280)  # set width
cap.set(4, 720)   # set height

# ----------------------------------------------------------------------------
# 3. CREATE A CANVAS TO DRAW ON
# ----------------------------------------------------------------------------
# This is a blank black image the same size as the webcam feed.
# We draw our lines onto this canvas, then blend it with the live video.
canvas = None

# Keeps track of the previous fingertip position so we can draw a line
# from the previous point to the current point (a series of short lines
# looks like one continuous stroke).
prev_x, prev_y = 0, 0

# Drawing settings
DRAW_COLOR = (255, 0, 255)  # magenta (B, G, R)
BRUSH_THICKNESS = 8

# ----------------------------------------------------------------------------
# 4. MAIN LOOP - READ WEBCAM FRAMES CONTINUOUSLY
# ----------------------------------------------------------------------------
while True:
    success, frame = cap.read()
    if not success:
        print("Failed to grab frame from webcam.")
        break

    # Flip the frame horizontally so it acts like a mirror
    # (moving your hand right moves the point right on screen)
    frame = cv2.flip(frame, 1)

    # Initialize the canvas once we know the frame size
    if canvas is None:
        canvas = np.zeros_like(frame)

    # MediaPipe expects RGB images, but OpenCV captures in BGR, so we convert.
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    # Process the frame and get hand landmark results
    result = hands.process(rgb_frame)

    # ------------------------------------------------------------------------
    # 5. CHECK IF A HAND WAS DETECTED
    # ------------------------------------------------------------------------
    if result.multi_hand_landmarks:
        for hand_landmarks in result.multi_hand_landmarks:

            # Each hand has 21 landmarks (points). The index fingertip is
            # landmark number 8 in MediaPipe's hand model.
            index_finger_tip = hand_landmarks.landmark[8]

            # Landmarks are given as normalized coordinates (0.0 to 1.0),
            # so we convert them to actual pixel coordinates.
            h, w, _ = frame.shape
            x = int(index_finger_tip.x * w)
            y = int(index_finger_tip.y * h)

            # (Optional) Draw the detected hand skeleton on the live feed
            # for visual feedback/debugging. Comment this out if not needed.
            mp_drawing.draw_landmarks(frame, hand_landmarks, mp_hands.HAND_CONNECTIONS)

            # --------------------------------------------------------------
            # 6. DRAW THE LINE ON THE CANVAS
            # --------------------------------------------------------------
            # If this is the first detected point, don't draw a line yet,
            # just set the starting point (otherwise we get a stray line
            # from (0,0) to the first detected position).
            if prev_x == 0 and prev_y == 0:
                prev_x, prev_y = x, y

            # Draw a line from the previous fingertip position to the
            # current one, on the persistent canvas (not the live frame).
            cv2.line(canvas, (prev_x, prev_y), (x, y), DRAW_COLOR, BRUSH_THICKNESS)

            # Update previous position for the next frame
            prev_x, prev_y = x, y

            # Draw a small circle at the fingertip for visual feedback
            cv2.circle(frame, (x, y), 10, DRAW_COLOR, cv2.FILLED)
    else:
        # If no hand is detected, reset previous position so we don't
        # draw a random line when the hand reappears somewhere else.
        prev_x, prev_y = 0, 0

    # ----------------------------------------------------------------------
    # 7. MERGE THE DRAWING CANVAS WITH THE LIVE WEBCAM FEED
    # ----------------------------------------------------------------------
    # Convert canvas to grayscale to create a mask of where drawing exists
    gray_canvas = cv2.cvtColor(canvas, cv2.COLOR_BGR2GRAY)
    _, inv_mask = cv2.threshold(gray_canvas, 20, 255, cv2.THRESH_BINARY_INV)
    inv_mask = cv2.cvtColor(inv_mask, cv2.COLOR_GRAY2BGR)

    # Cut out the area where the drawing will go, then add the colored drawing
    frame = cv2.bitwise_and(frame, inv_mask)
    frame = cv2.bitwise_or(frame, canvas)

    # ----------------------------------------------------------------------
    # 8. DISPLAY THE RESULT
    # ----------------------------------------------------------------------
    cv2.imshow("Air Drawing", frame)

    # ----------------------------------------------------------------------
    # 9. HANDLE KEYBOARD INPUT
    # ----------------------------------------------------------------------
    key = cv2.waitKey(1) & 0xFF

    if key == ord('c'):
        # Clear the canvas by resetting it to black
        canvas = np.zeros_like(frame)

    if key == ord('q'):
        # Quit the application
        break

# ----------------------------------------------------------------------------
# 10. CLEANUP
# ----------------------------------------------------------------------------
cap.release()
cv2.destroyAllWindows()
