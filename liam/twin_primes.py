import sys

def twinPrimes(x):
    x = int(x)
    prime = 0

    for i in range(3, x+1):

        if i % 2 == 1:
            if i < 5:
                prime += 1
                print("Twin Prime Pair ", prime, ": ", i, i+2)
            elif i > 5:
                if i % 3 == 0 or (i+2) % 3 == 0:
                    continue
                elif i % 5 == 0 or (i+2) % 5 == 0:
                    continue
                elif i % 7 == 0 or (i+2) % 7 == 0:
                    continue
                elif i % 11 == 0 or (i+2) % 11 == 0:
                    continue
            else:
                prime += 1
                print("Twin Prime Pair ", prime, ": ", i, i+2)

if __name__ == "__main__":
    n = len(sys.argv)

    if n == 2:
        twinPrimes(sys.argv[1])
    else:
        print('ERROR')