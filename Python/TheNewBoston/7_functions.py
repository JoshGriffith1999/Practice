def beef():
    print("Eat more chicken")

def bitcoin2usd(btc):
    amount = btc * 527
    return amount

def fib(i):
    if i == 0 or i == 1:
        return 1
    else:
        return fib(i - 1) + fib(i - 2)

for i in range(10):
    beef()
    print(bitcoin2usd(i))

for k in range(5):
    num = fib(k)
    print(k, ":", num)