import sys

def twinPrimes(x):
    x = int(x)
    prime = 1

    for i in range(3, x+1, 2):

        if i < 7:
            print("Twin Prime Pair ", prime, ": ", i, i+2)
            prime += 1
        
        if i > 7 and i < 100:
            if i % 3 == 0 or (i+2) % 3 == 0:
                continue
            elif i % 5 == 0 or (i+2) % 5 == 0:
                continue   
            elif i % 7 == 0 or (i+2) % 7 == 0:
                continue
            else:
                print("Twin Prime Pair ", prime, ": ", i, i+2)
                prime += 1
        
        if i > 100 and i < 250:
            if i % 3 == 0 or (i+2) % 3 == 0:
                continue
            elif i % 5 == 0 or (i+2) % 5 == 0:
                continue   
            elif i % 7 == 0 or (i+2) % 7 == 0:
                continue
            elif i % 11 == 0 or (i+2) % 11 == 0:
                continue
            elif i % 13 == 0 or (i+2) % 13 == 0:
                continue
            elif i % 17 == 0 or (i+2) % 17 == 0:
                continue
            elif i % 19 == 0 or (i+2) % 19 == 0:
                continue
            elif i % 23 == 0 or (i+2) % 23 == 0:
                continue
            elif i % 29 == 0 or (i+2) % 29 == 0:
                continue
            elif i % 31 == 0 or (i+2) % 31 == 0:
                continue
            else:
                print("Twin Prime Pair ", prime, ": ", i, i+2)
                prime += 1



if __name__ == "__main__":
    n = len(sys.argv)

    if n == 2:
        twinPrimes(sys.argv[1])
    else:
        print('ERROR')