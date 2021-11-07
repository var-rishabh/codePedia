# program to print a cool rainbow hexagon using turtle

import turtle

col = ("red", "yellow", "cyan", "green", "pink", "white")

t = turtle.Turtle()
screen = turtle.Screen()
screen.bgcolor("black")
t.speed(15)

for i in range(150):
    t.color(col[i%6])
    t.forward(i*1.5)
    t.left(59)
    t.width(3)
