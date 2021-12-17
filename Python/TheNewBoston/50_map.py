#take each item in a list and run it through a function
from ctypes import sizeof


income = [10, 20, 70]

def doubleMoney(dollars):
    return dollars  * 2

#Map
newIncome =  list(map(doubleMoney, income))
print("New income: ", newIncome)