#self keyword is used to access variables and methods withing a class
class Enemy:
    life = 3
    def attack(self):
        print("Attack")
        self.life -= 1
    def checkLife(self):
        if self.life <= 0:
            print("I am dead")
        else:
            print("Life remaing: ", str(self.life))


#To creacre new object: object_name = Class_Name()
#dot. operator is used to access methods from an object
enemey1 = Enemy()
enemey2 = Enemy()

enemey1.attack()
enemey1.attack()
enemey2.attack()

enemey1.checkLife()
enemey2.checkLife()