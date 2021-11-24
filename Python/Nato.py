def LetterToNato(letter):
    if(letter == "a" or letter == "A"):
        print("Alpha")
    elif(letter == "b" or letter == "B"):
        print("Bravo")
    elif(letter == "c" or letter == "C"):
        print("Charlie")
    elif(letter == "d" or letter == "D"):
        print("Delta")
    elif(letter == "e" or letter == "E"):
        print("Echo")
    elif(letter =="f" or letter == "F"):
        print("Foxtrot")
    elif(letter == "g" or letter == "G"):
        print("Golf")
    elif(letter == "h" or letter == "H"):
        print("Hotel")
    elif(letter == "i" or letter == "I"):
        print("India")
    elif(letter == "j" or letter == "J"):
        print("Juilet")
    elif(letter == "k" or letter == "K"):
        print("Kilo")
    elif(letter == "l" or letter == "L"):
        print("Lima")
    elif(letter == "m" or letter == "M"):
        print("Mike")
    elif(letter == "n" or letter == "N"):
        print("November")
    elif(letter == "o" or letter == "O"):
        print("Oscar")
    elif(letter == "p" or letter == "P"):
        print("Papa")
    elif(letter == "q" or letter == "Q"):
        print("Qubec")
    elif(letter == "r" or letter == "R"):
        print("Romeo")
    elif(letter == "s" or letter == "S"):
        print("Sierra")
    elif(letter == "t" or letter == "T"):
        print("Tango")
    elif(letter == "u" or letter == "U"):
        print("Uniform")
    elif(letter == "v" or letter == "V"):
        print("Victor")
    elif(letter == "w" or letter == "W"):
        print("Whiskey")
    elif(letter == "x" or letter == "X"):
        print("Zulu")
    elif(letter == "y" or letter == "Y"):
        print("Yankee")
    elif(letter == "z" or letter == "Z"):
        print("Zulu")
    elif(letter == "1"):
        print("Wun")
    elif(letter == "2"):
        print("Too")
    elif(letter == "3"):
        print("Tree")
    elif(letter == "4"):
        print("Fower")
    elif(letter == "5"):
        print("Fife")
    elif(letter == "6"):
        print("Six")
    elif(letter == "7"):
        print("Seven")
    elif(letter == "8"):
        print("Alti")
    elif(letter == "9"):
        print("Niner")
    elif(letter == "0"):
        print("Zeero")
    elif(letter == " " or letter =="."):
        print(" ")
    else:
        print("ERROR - Not Valid for Translation")

def digitToCode(letter):
    
    if(letter == "a" or letter == "A"):
        return 0
    elif(letter == "b" or letter == "B"):
         return 1
    elif(letter == "c" or letter == "C"):
         return 2
    elif(letter == "d" or letter == "D"):
         return 3
    elif(letter == "e" or letter == "E"):
         return 4
    elif(letter =="f" or letter == "F"):
         return 5
    elif(letter == "g" or letter == "G"):
         return 6
    elif(letter == "h" or letter == "H"):
         return 7
    elif(letter == "i" or letter == "I"):
         return 8
    elif(letter == "j" or letter == "J"):
         return 9
    elif(letter == "k" or letter == "K"):
         return 10
    elif(letter == "l" or letter == "L"):
         return 11
    elif(letter == "m" or letter == "M"):
         return 12
    elif(letter == "n" or letter == "N"):
         return 13
    elif(letter == "o" or letter == "O"):
         return 14
    elif(letter == "p" or letter == "P"):
         return 15
    elif(letter == "q" or letter == "Q"):
         return 16
    elif(letter == "r" or letter == "R"):
         return 17
    elif(letter == "s" or letter == "S"):
         return 18
    elif(letter == "t" or letter == "T"):
         return 19
    elif(letter == "u" or letter == "U"):
         return 20
    elif(letter == "v" or letter == "V"):
         return 21
    elif(letter == "w" or letter == "W"):
         return 22
    elif(letter == "x" or letter == "X"):
         return 23
    elif(letter == "y" or letter == "Y"):
         return 24
    elif(letter == "z" or letter == "Z"):
         return 25
    elif(letter == "1"):
         return 26
    elif(letter == "2"):
        return 27
    elif(letter == "3"):
         return 28
    elif(letter == "4"):
         return 29
    elif(letter == "5"):
         return 30
    elif(letter == "6"):
         return 31
    elif(letter == "7"):
         return 32
    elif(letter == "8"):
         return 33
    elif(letter == "9"):
         return 34
    elif(letter == "0"):
         return 35
    elif(letter == " " or letter =="."):
         return 36
    else:
        print("ERROR - Not Valid for Translation")

def codeToDigit(code):
    if(code == 0):
        return "A"
    elif(code == 1):
        return 1
    elif(code == 2):
        return "B"
    elif(code == 3):
        return "C"
    elif(code == 4):
        return "D"
    elif(code == 5):
        return "E"
    elif(code == 6):
        return "F"
    elif(code == 7):
        return "G"
    elif(code == 8):
        return "H"
    elif(code == 9):
        return "I"
    elif(code == 10):
        return "J"
    elif(code == 11):
        return "K"
    elif(code == 12):
        return "L"
    elif(code == 13):
        return "M"
    elif(code == 14):
        return "N"
    elif(code == 15):
        return "O"
    elif(code == 16):
        return "P"
    elif(code == 17):
        return "Q"
    elif(code == 18):
        return "R"
    elif(code == 19):
        return "S"
    elif(code == 20):
        return "T"
    elif(code == 21):
        return "U"
    elif(code == 22):
        return "V"
    elif(code == 23):
        return "W"
    elif(code == 24):
        return "Y"
    elif(code == 25):
        return "Z"
    elif(code == 26):
        return "1"
    elif(code == 27):
        return "2"
    elif(code == 28):
        return "3"
    elif(code == 29):
        return "4"
    elif(code == 30):
        return "5"
    elif(code == 31):
        return "6"
    elif(code == 32):
        return "7"
    elif(code == 33):
        return "8"
    elif(code == 34):
        return "9"
    elif(code == 35):
        return "0"
    elif(code == 36):
        return " "



def transission(letter):
    offset = 2
    shift = 11
    modulo = 36
    x = digitToCode(letter)
    x = ((x+shift)**offset)//modulo
    x = codeToDigit(x)
    return x

def encode(message):
    for x in range(len(message)):
        y = transission(message[x])
        LetterToNato(y)
######################## Main ################################################################

print("Test 123")
encode("Test 123")
print("\n")
print("Password1")
encode("Password1")