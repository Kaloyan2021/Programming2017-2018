import math
import turtle
t = turtle.Pen()
def hexagon(k):
    #t.speed(100)
    for _ in range(6):
        t.forward(k)
        t.left(60)
    t.forward(k)
    t.right(60)
    t.forward(k)
    t.left(30)
def main():
    n = int(input("input a number n = "))
    k = int(input("input a number k = "))       
    
    for _ in range(n):
        poss=t.pos()
        for _ in range(n-1):
            t.left(30)
            hexagon(k)
        t.left(30)
        for _ in range(6):
            t.forward(k)
            t.left(60)
        t.penup()
        t.setpos(poss)
        t.pendown()
        t.left(120)
        t.forward(k)
        t.right(60)
        t.forward(k)
        t.right(60)
        t.forward(k)
        t.right(60)
        t.forward(k)
        t.left(30)
main()
input()