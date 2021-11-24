#Essentially a vectex from c++
#key value pair with a colon seperating the two
# {key:value}
classmates = {"Tony":"Cool, but smells", "Emma":"Sits beheind me", "Lucas":"Asks to many questios"}

#Print value from specified key
print(classmates["Tony"])

#Loop through dictionary, need to variables to make it wor
#along with the.item() method
for key, value in classmates.items():
    print(key + " "+ value)