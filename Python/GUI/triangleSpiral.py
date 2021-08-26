# program to print a cool triangle spiral using turtle

import turtle

col = ("red", "yellow", "cyan", "green")

spiral = turtle.Turtle()
screen = turtle.Screen()
screen.bgcolor("black")
spiral.speed(5)
c = 0

for i in range(50):
    spiral.forward(i*10)
    spiral.right(114)
    spiral.color(col[c])
    if c == 3:
        c = 0
    else:
        c += 1 