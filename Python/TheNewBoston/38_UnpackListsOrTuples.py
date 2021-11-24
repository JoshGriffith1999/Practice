#Number of variables in the begining must be equal to the length of the list
# * 
items = ["December", "Bread Gloves", 11.21]
date, item, price = ["December", "Bread Gloves", 11.21]

print(items[0])
print(date)
print(item)
print(price)

###############################

def drop_first_and_last(grades):
    first, *middle, last = grades
    avg = sum(middle) / len(middle)
    print(avg)

drop_first_and_last([21,22,23,34,88,99])
drop_first_and_last([11,99,22,88,33,77,44,66,55])