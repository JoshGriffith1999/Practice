from random import *

def NumberToString(throw):
    if throw == 0:
        return "Rock"
    elif  throw == 1:
        return "Paper"
    else:
        return "Scissors"



def decideWinner(user, pc):
    if user == pc:
        print("DRAW")
    elif user == "Rock" and pc == "Paper":
        print("PC Wins")
    elif user == "Paper" and pc == "Scissors":
        print("PC Wins")
    elif user == "Scissors" and pc == "Rock":
         print("PC Wins")
    
    elif pc == "Rock" and user == "Paper":
        print("You Win")
    elif pc == "Paper" and user == "Scissors":
        print("You Win")
    elif pc == "Scissors" and user == "Rock":
        print("You Win")


if __name__ == '__main__':
    pc = NumberToString(randint(0,2))
    
    user = input("type Rock, Paper, Scissors, or stop: ")
    
    while user != "Rock" and user != "Paper" and user != "Scissors":
        user = input("Invalid input, type Rock, Paper, or Scissors: ")
    
    decideWinner(user, pc)