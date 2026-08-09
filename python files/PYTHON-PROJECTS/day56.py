import turtle
def setup_screen():
    screen = turtle.Screen()
    screen.bgcolor("black")
    screen.title("mesh effect")
    screen.setup(width=800, height=800)
    return screen
def setup_turtle():
    t = turtle.Turtle()
    t.speed(0)
    t.width(2)
    t.hideturtle()
    return t
def draw_mesh_effect(t):
    colors = ["red", "cyan", "orange", "yellow", "pink", "blue", "green"]
    for i in range(150):
        t.pencolor(colors[i%7])
        t.circle (i, 180)
        t.left(90)
        t.forward(i)
        t.left(45)

def main():
    screen = setup_screen()
    t = setup_turtle()
    draw_mesh_effect(t)
    screen.exitonclick()

if __name__ == "__main__":
    main()
