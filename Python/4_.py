#this is a single comment in python
'''
this is a multipule line comment in python
'''
magicNumber = 26

for n in range(101):
    if n == magicNumber:
        print("Found magic number ", magicNumber)
        break
    else:
        print("Magic number not found ")
        continue