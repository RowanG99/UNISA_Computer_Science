import sys
import linecache
import pickle

# matter = '''Python is a great language
#             Easy to understand and learn
#             Supports OOP
#             Also used in web development'''
# f = open('test.txt', 'w')
# f.write(matter)
# f.close()
# f = open('test.txt')
# while True:
#     line = f.readline()
#     if len(line) == 0:
#         break
#     print(line,)
# f.close()

# f = open("test.txt", "r")
# print("Name of the file:", f.name)
# print("Closed?", f.closed)
# print("FIle number descriptor is:", f.fileno())
# f.close()

# f = open("test.txt", "r")
# lines = f.read()
# print(lines)
# f.close()


# try:
#     f = open("tst.txt", "r")
#     lines = f.read()
# except IOError:
#     print("File tst.txt does not exist")
#     sys.exit(1)
# f.close()
# print(lines)

# f = open("test.txt","r")
# lines=f.readlines()
# f.close()
# print("The contents in the file are:", lines)
# print("\nThe contents in the file are:")
# for line in lines:
#     sys.stdout.write(line)
# print("\n\nThe contents in the file are:")
# for i in range(0, len(lines)):
#     sys.stdout.write(lines[i])

# matter2 = '''Its very hot today
# Lets have a Cold drink '''
# f = open("test.txt","a")
# f.write("\n%s" %matter2)
# f.close()
# f = open("test.txt", "r")
# lines = f.readlines()
# f.close()
# print("The contents in the file are:")
# for line in lines:
#     sys.stdout.write(line)

# f = open("test.txt", "r")
# lines = f.read()
# f.close()
# g = open("test copy.txt", "w")
# g.write(lines)
# g.close()

# f = open("test.txt", "r")
# lines = f.readlines()
# print("Original content of the file:")
# for line in lines:
#     sys.stdout.write(line)
# f.close()
# del lines[1:3]
# f=open("test.txt", "w")
# f.writelines(lines)
# f.close()
# print("\nThe content of the file after deleting second and third line:")
# f = open("test.txt", "r")
# lines = f.read()
# print(lines)
# f.close()

# f=open("test.txt", "r")
# lines = f.readlines()
# print("Original content of the file:")
# for line in lines:
#     sys.stdout.write(line)
# f.close()
# n=int(input("\nEnter the line number to change: "))
# if n <= len(lines):
#     r=input("Enter the new content: ")
#     lines[n-1]=r+"\n"
#     f=open("test.txt","w")
#     f.writelines(lines)
#     f.close()
#     print("The amount of the file after updating line", n)
#     f=open("test.txt", "r")
#     lines=f.read()
#     print(lines)
#     f.close()
# else:
#     print("The line number, ", n, "is not found in the file")

# f = open("test.txt", "r")
# line=f.readline()
# print("A line from the file is:", line)
# f.seek(5)
# line=f.readline()
# print("The line from character 6 till end of line is: ", line)
# print("The pointer is at location", f.tell())
# f.seek(10)
# line=f.read(15)
# print("The fifteen characters starting at location 11 are as:", line)

# line=linecache.getline("test.txt", 3)
# print("The content of the third line is:", line)

# f = open("numbers.txt", "w")
# n=int(input("How many numbers?"))
# print("Enter", n, "numbers")
# for i in range(0, n):
#     m=input()
#     f.write("%s\n" %m)
# f.close()
# f=open("numbers.txt")
# lines=f.readlines()
# f.close()
# print("The numbers stored in the file are")
# for line in lines:
#     print(int(line),)
# print("The numbers in the file multipled by 2")
# for line in lines:
#     print(int(line)*2)

# str = "Hello World"
# f = open("filebinary.bin", "wb")
# f.write(str.encode("utf-8"))
# f.close()
# f = open("filebinary.bin", "rb")
# fcontent = f.read()
# f.close()
# print("The content in the file is:")
# print(fcontent.decode("utf-8"))

# class rect:
#     def __init__(self, x, y):
#         self.l = x
#         self.b = y
#     def rectarea(self):
#         return "Area of rectangle is", self.l*self.b
# r=rect(5,8)
# f=open("studentinfo.bin", "wb")
# pickle.dump(r,f)
# f.close()
# del r
# f=open("studentinfo.bin","rb")
# storeobj=pickle.load(f)
# print(storeobj.rectarea())

class user:
    def __init__(self, x,y,z):
        self.id = x
        self.name = y
        self.emailadd = z
    def dispuser(self):
        print("User ID:", self.id)
        print("User name:", self.name)
        print("Email Address:", self.emailadd)
f=open("UsersInfo.bin","wb")
n=int(input("How many users?"))
print("Enter", n, "numbers")
for i in range(0,n):
    u=input("User ID: ")
    n=input("User name: ")
    e=input("Email Address: ")
    usrobj=user(u,n,e)
    pickle.dump(usrobj,f)
f.close()
print("\nInformation of the users is:")
f = open("UsersInfo.bin", "rb")
while True:
    try:
        usrobj = pickle.load(f)
    except EOFError:
        break
    else:
        usrobj.dispuser()
f.close()