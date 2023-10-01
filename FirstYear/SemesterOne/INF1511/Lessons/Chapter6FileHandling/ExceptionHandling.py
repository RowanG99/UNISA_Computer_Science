from __future__ import division
import sys
# try:
#     n = input("Enter your name: ")
# except EOFError:
#     print("EOF error has occured")
#     sys.exit(1)
# except:
#     print("Some error has occurred")
# print("The name entered is", n)

# n = input("Enter a number ")
# if n.isdigit():
#     n=int(n)
# try:
#     m=15/n
# except TypeError as ex:
#     print("You have not entered a numeric value:", ex)
#     sys.exit(1)
# except ZeroDivisionError as ex:
#     print("You have entered zero value:", ex)
#     sys.exit(1)
# print("The result is", m)

# try:
#     f = open("tet.txt","r")
#     try:
#         lines = f.read()
#     finally:
#         f.close()
# except IOError:
#     print("File does not exist")
#     sys.exit(1)
# print(lines)

class myException(Exception):
    def __init__(self, quantity):
        Exception.__init__(self)
        self.quantity = quantity
try:
    s = int(input("Enter quantity: "))
    if s <= 0:
        raise myException(s)
except EOFError:
    print("You pressed EOF")
except myException as ex:
    print("myException: The quantity entered is %d, it must be some positive value" %ex.quantity)
else:
    print("No exception raised.")
