# | 0 | 1 | 2 | 3 |
#0|   |   | q |   |
#1| q |   |   |   |
#2|   |   |   | q |
#3|   | q |   |   |
import turtle
t = turtle.Pen()
def chessBoard(x):
    a = (x*50)//2
    t.penup()
    t.goto(-a,-a)
    t.pendown()
    t.speed(100)
    z = -a + 50
    for j in range(x):
        for i in range(x):
            t.forward(50)
            for j in range(4):
                t.left(90)
                t.forward(50)
        t.penup()
        t.goto(-a,z)
        t.pendown()
        z += 50

chessBoard(int(input("Input table")))

input()
#class Board():
#def posibility(self):
#    return 1
#def draw(self):
#    if possibility:
#        chessBoard((int(input("Input table")))