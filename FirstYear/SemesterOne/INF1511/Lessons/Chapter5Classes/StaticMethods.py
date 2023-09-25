# class rect:
#     @staticmethod
#     def disp_message():
#         l=50
#         print("Length is: ", l)

# rect.disp_message()
# r=rect()
# r.disp_message()

# class product:
#     count = 0
#     def __init__(self, name):
#         self.name = name
#         product.count += 1
#         @staticmethod
#         def prodstatecount():
#             return product.count
        
#         @classmethod
#         def prodclasscount(cls):
#             print('class info:' ,cls)
#             print('class method: product count is - ', cls.count)

# class product:
#     count = 0
#     def __init__(self, name):
#         self.name=name
#         product.count += 1
#     @staticmethod
#     def prodstatcount():
#         return product.count
#     @classmethod
#     def prodclasscount(cls):
#         print('Class info: ', cls)
#         print ('Class method - The product count is: ', cls.count)

# p1=product('Camera')
# p2=product('Cell')
# print('Static method - The product count is: ', product.prodstatcount())
# p2.prodclasscount()

class rect:
    def __init__(self, x, y):
        self.l = x
        self.b = y
    def rectarea(self):
        return self.l * self.b
r=rect(5,8)
s=r
print("Area of rectangle is:", r.rectarea())
print("Area of rectangle is:", s.rectarea())