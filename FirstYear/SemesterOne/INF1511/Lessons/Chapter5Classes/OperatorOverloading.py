class rect:
    def __init__(self,x,y):
        self.l=x
        self.b=y
    def __str__(self):
        return "Length is %d, Breadth is %d " %(self.l, self.b)
    def __add__(self, other):
        return rect(self.l+ other.l, self.b+other.b)
    def rectarea(self):
        return self.l*self.b

r1=rect(5,8)
r2=rect(10,20)
r3=r1+r2
print(r3)
print("Area of rectangle is ", r3.rectarea())

if r1 == r2:
    print("EQUAL")
else:
    print("NOT EQUAL")

# Poly means many, and morph means change. Through polymorphism, you
# can have a method with the same name in different classes to perform
# different tasks. You can handle objects of different types in the same way.