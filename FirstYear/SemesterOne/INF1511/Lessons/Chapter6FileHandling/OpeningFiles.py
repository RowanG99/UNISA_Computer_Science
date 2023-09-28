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

import sys

f = open("test.txt")
lines = f.readlines()
f.close()
print("The contents in the file are: ", lines)
print("\nThe contents in the file are:")
for line in lines:
    sys.stdout.write(line)
print("\n\nThe contents in the file are:")
for i in range(0, len(lines)):
    sys.stdout.write(lines[i])