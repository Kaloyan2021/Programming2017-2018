import turtle
t = turtle.Pen()


class Board:

    def __init__(self, size):
        self.size = size
        self.cells = [None for _ in range(self.size)]
        
    def is_empty(self):
        checks = [c is None for c in self.cells]
        return all(checks)
    
    def set_queen(self, col, row):
        assert 0 <= col < self.size
        assert 0 <= row < self.size
        self.cells[col] = row
    def get_queen(self,col,row):
        assert 0 <= col<self.size
        #assert 0 <= row <self.size
        return self.cells[col]
    
    def unset_queen(self,col):
        assert 0 <= col < self.size
        self.cells[col] = None

    def under_attack(self, col, row):
        assert 0 <= col < self.size
        assert 0 <= row < self.size
        if self.cells[col] is None:
            return True

        for r in self.cells:
            if r is not None and r == row:
                return True
        for c in range(self.size):
            r = self.cells[c]
            if r is None:
                continue
            if abs(row - r) == abs(col - c):
                return True
        return False
        
    
    
    def solve(self,col=0):
        if col == self.size:
            return True
        for row in range(self.size):
            if not self.under_attack(col,row):
                self.set_queen(col,row)
                if self.solve(col+1):
                    return True
                self.unset_queen(col)
        return False    
    
    def pretty_print(self):
        pass

    def draw(self,x):
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
    
    def placeDots(self,chessbord,x,y):
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





