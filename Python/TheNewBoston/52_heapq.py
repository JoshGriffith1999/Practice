import heapq

grades = [15, 30, 45, 60, 75, 90, 105, 0, 20, 41, 17]

meat = [
    
    {"item": "Beef", "price": 5.99},
    {"item": "Pork", "price": 4.99},
    {"item": "Chicken", "price": 3.99},
    {"item": "Lamb", "price": 6.99},
    {"item": "Alligator", "price": 11.99},
    {"item": "Squirle", "price": 1.99}
]


#Find three largest, replace 3 for any number to find n largest
print("Largest:", heapq.nlargest(3, grades))

#Find smallest
print("Smallest:", heapq.nsmallest(3, grades))

#Largest with key search
print("Most expensive meat:", heapq.nlargest(1, meat, key=lambda meat: meat["price"]))