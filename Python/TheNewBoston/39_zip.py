#Zip takes two lists of equal length and "ties" them together
#requires multiple variales to access the data "tied together"

first = ["Chester", "Corey", "Mike"]
last = ["Bennington", "Taylor", "Shinodia"]

names = zip(first, last)

for a,b in names:
    print(a, b)