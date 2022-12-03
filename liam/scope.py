
#This is global scope variable meaning that anywhere in the program it can be accessed
x = 1

def foo4():

    fruit = input("Enter a fruit ")

    if fruit == 'banana':
        x = 1337
        print("foo4's x variable = ", x )
    else:
        #Program is going to crash here, I want you to tell me why - might require a little research
        print("foo4's x variable = ", x )
        print("next time type in banana")

def foo3(x):

    # this x is going to be local to foo3, only code written in foo3 function can access this x
    x += 1
    print("Foo3's x = ", x)

def foo2():

    #As you can notice foo2 doesn't have an x variable, so it will then look upwards to the global scope to find an x variable to print
    print("foo 2's x = ", x)

def foo():
    
    # this x is going to be local to foo, only code written in foo function can access this x
    x = 2
    print("foo's x = ", x)
    foo2()
    foo3(x)

def main():
    
    # this x is going to be local to main, only code written in the maing function can access this x
    x = 3
    print("Gloabl x = ", x)

    foo()
    foo4()


main()