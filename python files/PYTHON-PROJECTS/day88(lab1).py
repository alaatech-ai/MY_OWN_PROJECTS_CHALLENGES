import math


#ex1
a=12
print(a)
print(type(a))
b='good day'
print(b)
print(type(b))

#ex2
fval = -1.48e-3
print(fval)
#ex3
nb1 = 2.9
print(type(nb1))
nb2 = -4
print(type(nb2))
nb3 = 29*2.71 - 1
print(type(nb3))
#ex4
# 3=y (error)
#ex5
#float is a python data type
#ex6
x=3
x=3.0
x='3'
print(x)
#ex7
a=22.35*2.71
b=int(a)
c=float(b)
print(a)
print(b)
print(c)
#ex8
x='hello'
x='good bye'
print('hello', x)
#ex9
x=90
z='hello'
print(x,z)
#ex10
name = input('enter ur name')
ages = int(input('enter ur age'))
print(f"hello, my name is {name} and im {ages}years old")
#ex11
name = input('enter ur name\n')
birth = int(input('enter ur birth year\n'))
age = 2026 - birth
print(age)
#ex12
text = 'Twinkle, twinkle lil star,' \
'how i wonder what u are!' \
'up above the world so high ,' \
'like adiamond in the sky.' \
'Twinkle twinkle, lil star,' \
'how i wnder what u are.'
print(text)
#ex13
radius = float(input('enter the radius of ur circle\n'))
area = math.pi * radius ** 2
print(area)
#ex14
first_name = input('enter ur first name\n')
last_name = input('enter ur last name\n')
temp = first_name
first_name= last_name
last_name = temp
print(f"{first_name} {last_name}")
#ex15
sum = 0
n = int(input('enter an integer'))
sum = n+n*n + n**3
print(sum)
#ex16
text = 'here doc'
print(f'a str thet u dont have to escape this' \
'is a....mulyi line{text}....>example')
#ex17
radius = 6
volume = 4/3* math.pi * radius*3
print(volume)
