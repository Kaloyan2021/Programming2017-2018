

class Date:
    
    def __init__(self, day, month, year):
        print("constructor called")
        self.day = day
        self.month = month
        self.year = year

    def dump(self): # self - обекта за който е извикан метода
        print(self.month, self.day, self.year) 

    def next_day(self):
        self.day += 1
        if self.day > 30:
            self.day = 1
            self.month += 1
        if self.month > 12:
            self.month = 1
            self.year += 1




d = Date(3, 5, 2018)

c = Date(30, 6, 2018)

print(d.month, d.day, d.year)
print(d)
print(c)


d.dump()
c.dump()
c.next_day()
c.dump()

class Person:
    pass

class Student(Person):
    pass