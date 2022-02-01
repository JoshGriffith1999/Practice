from random import *
bottomBound = 0
topBound = 50

#function where most of the game is being played from
#@correct: passed into the function
def guess(correct):
    userGuess = 1
    maxTries = 5
    userTries = 0
    
    #main game loop, testst to make sure that the number
    #of user tests is still less then the max number of guesses
    while userTries < maxTries:
        userGuess = int(input("Guess the correct answer: "))
        #If the users guess is incorrect, number of guess that the user
        #used is increamneted by one, if user runs out of attempts fail is returned
        #If user gets the correct answer in the max number of attempts, pass is returned
        if(userGuess != correct):
            userTries += 1
            if(userGuess  <= correct):
                print("wrong number, to low, try again", maxTries - userTries, "left")
            else:
                print("wrong number, to high, try again", maxTries - userTries, "left")
        else:
            print("Correct!!")
            return "Pass"
    return "fail"
#mai
if __name__ == '__main__':
    playAgain = "yes"
    
    #Continuation loop, used if user wants to play game multiple times
    while playAgain == "yes":
        
        #gets answer between an upper and lower bound preset user is trying to guess
        correct = randint(bottomBound, topBound)
        #calling main function that runs the guessing game
        #returns pass if user gets the correct answer in given number of guesses
        #returns fail if user fails to guess the correct number in given number of guess
        status = guess(correct)
        
        #if user fails to guess correct answer, displays correct answer
        if status == "fail":
            print("You failed, correct answer is ", correct)
        
        #Ending state, sees if user wants to continue playing
        print("Do you want to play again?\n")
        playAgain = input("type yes to play again or no to stop: ")
        
        #tests to make sure that user entered in either yes or no, loops until it is done do
        while playAgain != "yes" and playAgain != "no":
            playAgain = input("Invalid input, yes to continue or no to stop: ")
        if playAgain == "no":
            break