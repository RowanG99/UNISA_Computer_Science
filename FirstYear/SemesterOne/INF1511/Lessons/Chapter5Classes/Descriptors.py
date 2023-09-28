# class product:
#     def __init__(self, name,x=5):
#         self.name = name
#         self.price = x
#     def __set__(self, obj, value):
#         print("Setting attribute", self.name)
#         self.price = value
#     def __get__(self, obj, objtype):
#         print("Getting attribute", self.name)
#         return self.price

# class cart:
#     p = product("Butter", 7)

# k=cart()
# print(k.p)
# k.p=10
# print(k.p)

# def __getattr__(self,name):
#     return self.name

# def __delattr__(self,name):
#     del self.name

class product:
    price=25
    def __init__(self,name):
        self.name=name
    def __setattr__(self,name,value):
        self.__dict__[name]=value
    def __getattr__(self,name):
        return self.name

p=product("Camera")
print(p.price)
print(p.name)
p.price=15
p.name="Cell"
print(p.name)
print(p.price)
