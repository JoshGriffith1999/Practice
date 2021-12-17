meat = {
    "Beef" : 5.99,
    "Pork" : 6.99,
    "Lamb" : 7.99,
    "Chicken" : 3.99,    
}

#Used min to find the smallest value out of meat dictionary
#had to use zip to store items in a tuple where it is stored as value, key pair from meat
min_price = min( zip(meat.values(), meat.keys()) )

print("Cheapest meat:", min_price)