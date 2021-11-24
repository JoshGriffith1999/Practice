#Lets build a robot barista
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

#Get order
CustomerOrder = input("What would you like to order?\t")
print("thankyou " + CustomerName + " your order " + CustomerOrder + " will be ready in 5 minutes")
x= 0
for i in range(10**3): x = x + 1

print(CustomerName, " Order up")