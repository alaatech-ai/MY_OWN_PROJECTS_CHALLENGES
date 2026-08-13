distance = float(input("enter the distance:\n"))
speed = float(input("enter the speed:\n"))
batt = float(input(" enter the capacity of battery:\n"))
time = distance / speed
if( time > batt):
    print('battery not sufficient!\n')
else:
    print('mission safe\n')
