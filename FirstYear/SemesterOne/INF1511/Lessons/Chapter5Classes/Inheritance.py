# Figure 5.1 Single Inheritance - class B inherits class A, or class B is derived from class A
#     A
#     ^
#     |
#     B

from __future__ import division

# class rect:
#     def __init__(self):
#         self.l = 5
#         self.b = 8
#     def rectarea(self):
#         return self.l * self.b

# class triangle(rect):
#     def __init__(self):
#         rect.__init__(self)
#         self.x = 17
#         self.y = 13
#     def triangle(self):
#         return 1/2*self.x*self.y
# r=triangle()
# print("Area of rectangle is ", r.rectarea())
# print("Area of triangle is ", r.triangle())

# class rect:
#     def __init__(self, x, y):
#         self.l = x
#         self.b = y
#     def rectarea(self):
#         return self.l*self.b

# r=rect(5,8)
# print("Area of rectangle is ", r.rectarea())
# print("Area of rectangle is ", r.l*r.b)

# class rect:
#     def __init__(self, x, y):
#         self.__l = x
#         self.__b = y
#     def rectarea(self):
#         return self.__l * self.__b

# r = rect(5,8)
# print("Area of rectangle is ", r.rectarea())
# print("Area of rectangle is ", r._rect__l*r._rect__b)

class rect:
    def __init__(self):
        self.l = 8
        self.b = 5
    def area(self):
        print ("Area of rectangle is ", self.l * self.b)

class triangle(rect):
    def __init__(self):
        rect.__init__(self)
        self.x = 17
        self.y = 13
    def area(self):
        #rect.area(self)
        print ("Area of triangle is ", 1/2*self.x * self.y)

r=triangle()
r.area()


