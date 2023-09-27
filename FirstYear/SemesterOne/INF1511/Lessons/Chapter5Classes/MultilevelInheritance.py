# Figure 5.2 Multilevel Inheritance - class B inherits class A, which in turn is inherited by class C. B 
# can access the public members of A, and C can acces the public members of B and hence of A.
#     A
#     ^
#     |
#     B
#     ^
#     |
#     C

# class worker: 
#     def __init__(self, c, n, s):
#         self.code = c
#         self.name = n
#         self.salary = s
#     def showworker(self):
#         print("Code is ", self.code, "\nName is ", self.name, "\nSalary is ", self.salary)

# class officer(worker):
#     def __init__(self, c, n, s):
#         worker.__init__(self, c, n, s)
#         self.hra = s*60/100
#     def showofficer(self):
#         worker.showworker(self)
#         print("HRA - House Rent Allowance is ", self.hra)

# class manager(officer):
#     def __init__(self, c,n,s):
#         officer.__init__(self,c,n,s)
#         self.da = s*98/100
#     def showmanager(self):
#         officer.showofficer(self)
#         print("DA - Dearness Allowance is ", self.da)

# w=worker(101, "John", 2000)
# o=officer(102, "David", 4000)
# m=manager(103, "Ben", 5000)
# print("Information of worker is ")
# w.showworker()
# print("\nInformation of officer is ")
# o.showofficer()
# print("\nInformation of manager is ")
# m.showmanager()

# from __future__ import division

# class worker:
#     def __init__(self,c,n,s):
#         self.code = c
#         self.name = n
#         self.salary = s
#     def showworker(self):
#         print("Code is ", self.code ,"\nName is ", self.name, "\nSalary is ", self.salary)
    
# class officer(worker):
#     def __init__(self,c,n,s):
#         worker.__init__(self,c,n,s)
#         self.hra = s*60/100
#     def showofficer(self):
#         worker.showworker(self)
#         print("HRA - House Rent Allowance is ", self.hra)

# class manager(worker):
#     def __init__(self, c,n,s):
#         worker.__init__(self,c,n,s)
#         self.hra = s*60/100
#         self.da = s*98/100
#     def showmanager(self):
#         worker.showworker(self)
#         print("HRA - House Rent Allowance is ", self.hra, "\nDA - Dearness Allowance is ", self.da)

# w=worker(101, "John", 2000)
# o=officer(102, "David", 4000)
# m=manager(103, "Ben", 5000)
# print("Information of worker ")
# w.showworker()
# print("\nInformation of officer is ")
# o.showofficer()
# print("\nInformation is manager is ")
# m.showmanager()

# class student:
#     def __init__(self,r,n):
#         self.roll = r
#         self.name = n
#     def showstudent(self):
#         print("Roll: ", self.roll, "\nName is ", self.name)

# class science(student):
#     def __init__(self,r,n,p,c):
#         student.__init__(self,r,n)
#         self.physics=p
#         self.chemstry=c
#     def showscience(self):
#         student.showstudent(self)
#         print("Physics marks: ", self.physics, "\nChemistry marks: ", self.chemstry)

# class arts(student):
#     def __init__(self,r,n,h,g):
#         student.__init__(self,r,n)
#         self.history = h
#         self.geography = g
#     def showarts(self):
#         student.showstudent(self)
#         print("History marks: ", self.history,"\nGeography marsk: ", self.geography)

# s=science(101, "David", 65, 75)
# a=arts(102, "Ben", 70, 60)
# print("Information of science student is ")
# s.showscience()
# print("\nInformation of arts student is ")
# a.showarts()

# Figure 5.3. Multiple inheritance - if a class is derived from more than one base class, you call it multiple inheritance.

# A   B
# ^   ^
# |   |
#   _
#   |  
#   C

from __future__ import division

class rect:
    def __init__(self):
        self.l = 8
        self.b = 5
    def area(self):
        return self.l*self.b
class triangle:
    def __init__(self):
        self.x = 17
        self.y = 13
    def area(self):
        return 1/2*self.x*self.y
class both(rect, triangle):
    pass
r=both()
print("Area of rectangle is ", r.area())