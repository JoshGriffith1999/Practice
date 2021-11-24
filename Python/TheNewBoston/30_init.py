#__init__ is a class constructor
class Tuna:
    def __init__(self):
        print("Wait, who's Nemo?")
    def swim(self):
        print("Keep on swimming, keep on swimming, swimming swimming")

class Enemy:
    def __init__(self, x):
        self.energy = x
    def get_energy(self):
        print(self.energy)

dory = Tuna()
dory.swim()

jason = Enemy(5)
freddy = Enemy(18)
micheal = Enemy(10000)

jason.get_energy()
freddy.get_energy()
micheal.get_energy()