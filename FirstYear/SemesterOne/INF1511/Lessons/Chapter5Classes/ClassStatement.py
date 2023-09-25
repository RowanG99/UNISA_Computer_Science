class rect:
    def __init__(self, x=3, y=3):
        self.l = x
        self.b = y
    def area(self):
        print(rect.l*rect.b)
        print(self.l*self.b)
print("Length is %d, Breadth is %d" %(rect.l, rect.b))

r=rect()
print(r.area())

# __name__ class name identifier used in the class statement
# __bases__ tuple of class objects specified as the base classes in the class statement
# __dict__ dictionary object that the class uses to hold its other attributes. To assign a value to an attribute, you use the
# dictionary object
# __doc__ class documentation string
# __module__ name of the module in which the class is defined

#print("Class name is", rect.__name__, "and base class is ", rect.__bases__)
#print("Attributes of this class are ", rect.__dict__)
