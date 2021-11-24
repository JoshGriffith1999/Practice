class Girl:
    #This is a class variable, all objects share this variables value
    gender = "female"
    def __init__(self, name):
        #Instamce varianle - unique to the specific object/instance 
        self.name = name
    def printName(self):
        print(self.name)
    def printGender(self):
        print(self.gender)

emily = Girl("Emily")
megan = Girl("Megan")
susan = Girl("Susan")

emily.printName()
megan.printName()
susan.printName()

emily.printGender()
megan.printGender()
susan.printGender()