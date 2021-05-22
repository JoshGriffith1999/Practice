import sys

def power_mod(a, k, p):
    return (a**k)%p

def order(a, p):
    for i in range(1, p):
        if power_mod(a, i, p) == 1:
            return i
    return "No possible solution"

a = int(sys.argv[1])
k = int(sys.argv[2])
p = int(sys.argv[3])
print("Order: ", order(a, p), "DLP: ", power_mod(a, k, p))