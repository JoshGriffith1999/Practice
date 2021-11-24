#Notes sets CANNOT have duplicates unlike lists
#set
groceries = {"cereal", "milk", "tuna", "beer", "ductape", "beer"}
#list
groceries2= ["cereal", "milk", "tuna", "beer", "ductape", "beer"]


#Interesting note, whenever a set is printed in whole at once, the order of items in the
#list are not always printed in the same order
print("Set:", groceries)
print("List: ", groceries2)

new_item = "hammer"
if new_item in groceries:
    print("already have milk hoss")
else:
    print("Oh yea, you need that")