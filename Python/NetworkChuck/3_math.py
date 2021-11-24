""""
#let's play with some math

name = "Dave Portnoy"

age = 22

print(name , age)

#See the type command prints
print(type(name))
print(type(age))

#Putting quotes around age
age = "22"
print(type(name))
print(type(age))


#Working with floats
actual_age = 21.96

print(type(actual_age))
"""

"""
x = 2
y = 3
#Add
z = x+y
print(z)
#Subtract
z = x-y
print(z)
#Multiply
z = x*y
print(z)
#Divide
z = x/y
print(z)
#Exponent
z = x**y
print(z)

#Modlous
z = x//y
print(z)
"""
#Continuation from previous program
print("hello welcome to network chuck barista!!!!!!!!!!")
print("BLCCC is served here")

#Get the users name
CustomerName = input("What is your name?\t")
print("Hello, " + CustomerName)

#Create and display menu
Menu = """
Coffee\t  Medium Price (16oz) + Large Price\n
1: Murdered Out\t $1.69\t + $2.29\n
2: Beyond Black\t $1.69\t + $2.29\n
3: Freedom Fuel\t $1.69\t + $2.29\n
4: Black Beards Delight\t + $1.89\t "$2.49\n
"""

print(Menu)

#Get order, and numbe of coffees wanted
CustomerOrder = input("What would you like to order?\t")
price = 1.69

NumberOfCoffee = input("How many coffees do do you want?\t")

#Total price of all the coffees that the customer wants
total = price * int(NumberOfCoffee)

#Print leaving message
print("thank you " + CustomerName + ", your order " + str(NumberOfCoffee) + " "
      + str(CustomerOrder) + " will cost $"+ str(total) + "\nwill be ready in 5 minutes")
x = 0
for i in range(10**8): x = x + 1

print(CustomerName, " Order up")
