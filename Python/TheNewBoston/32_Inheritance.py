#Inheritance - passing of variables and methods from one class to another
#To inherit one class into another, place the super class into the prarantheses of the inheriting class

class Parent():
    def printLastName(self):
        print("Johnson")

class Child(Parent):
    def printFirstName(self):
        print("Dave")
    #This function override the method inherited from the Parent class - requires methods to have the exact same last name
    def printLastName(self):
        print("Jefferson")
        
kid = Child()

kid.printFirstName()
kid.printLastName()