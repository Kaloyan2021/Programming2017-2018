# | 0 | 1 | 2 | 3 |
#0|   |   | q |   |
#1| q |   |   |   |
#2|   |   |   | q |
#3|   | q |   |   |
import turtle
t = turtle.Pen()
def chessBoard(x):
    t.pendown()
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
    t.penup()
    placeDots(x,-1,1)
    placeDots(x,1,-1)
    placeDots(x,3,-3)
    placeDots(x,-3,3)

def placeDots(chessbord,x,y):
    t.speed(1)
    t.penup()
    t.goto(0,0)
    if chessbord % 2 == 0:
        x *= 25
        y *= 25
    else:
        if x == 0 and y == 0:
            pass
        else:
            x *= 25
            x *= 25
    t.goto(x,y)
    t.dot()
    t.goto(0,0)
        
def find(chessCol):
    #chessBoard(chessCol)
    arr = [chessCol][chessCol]
    arrCol = [chessCol]
    arrRow = [chessCol]
    for i in range(chessCol):#input all columns and rows to be free
        for j in range(chessCol):
            arr[i][j] = 0
    arr[0][0] = 1
    for i in range(chessCol):#if row is taken
        for j in range(chessCol):
            if arr[i][j] == 1:
                arrRow[i] = 0
            else:
                arrRow[i] = 1
    for i in range(chessCol):#if column is taken
        for j in range(chessCol):
            if arr[j][i] == 1:
                arrRow[i] = 0
            else:
                arrRow[i] = 1

chessCol = int(input("Input table"))
#find(chessCol)
chessBoard(chessCol)
input()
#class Board():
#def posibility(self):
#    return 1
#def draw(self):
#    if possibility:
#        chessBoard((int(input("Input table")))