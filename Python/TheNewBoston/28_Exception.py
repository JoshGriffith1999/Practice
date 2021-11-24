#This causes an exception/value error - did it on purpose
#number = int(input("What is yoour favorite number?\t"))

while True:
    #try is always ran first, if no error except block is ignored; used just in case a chunk of code can break
    try:
        number = int(input("What is your favorite number?\t"))
        print(18/number)
        print(number, "\n")
        break
    #Except block is only ran if the try block throws an error
    except ValueError:
        print("Accidenlty entered a string, please enter a number\n")
    except ZeroDivisionError:
        print("Hey, value you entered cannot be zero")
    #General Except block; used if we don't know what can of execption can be thrown
    except:
        break
    #Finally block is always ran, no matter if an error is thrown or not
    finally:
        print("Loop completed")