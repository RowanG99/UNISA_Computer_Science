# Figure 5.2 Multilevel Inheritance - class B inherits class A, which in turn is inherited by class C. B 
# can access the public members of A, and C can acces the public members of B and hence of A.
#     A
#     ^
#     |
#     B
#     ^
#     |
#     C

class worker: 
    def __init__(self, c, n, s):
        self.code = c
        self.name = n
        self.salary = s
    def showworker(self):
        print("Code is ", self.code, "\nName is ", self.name, "\nSalary is ", self.salary)

class officer(worker):
    def __init__(self, c, n, s):
        worker.__init__(self, c, n, s)
        self.hra = s*60/100
    def showofficer(self):
        worker.showworker(self)
        print("HRA - House Rent Allowance is ", self.hra)

class manager(officer):
    def __init__(self, c,n,s):
        officer.__init__(self,c,n,s)
        self.da = s*98/100
    def showmanager(self):
        officer.showofficer(self)
        print("DA - Dearness Allowance is ", self.da)

w=worker(101, "John", 2000)
o=officer(102, "David", 4000)
m=manager(103, "Ben", 5000)
print("Information of worker is ")
w.showworker()
print("\nInformation of officer is ")
o.showofficer()
print("\nInformation of manager is ")
m.showmanager()