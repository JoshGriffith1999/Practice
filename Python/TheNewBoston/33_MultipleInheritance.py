#To inhert multiple classes place a comma between classes that you want to inhert in the inheriting class's paranthesis
#pass keyword allows use to not have define methods or variables in a class
class Mario():
    def move(self):
        print("I am moving")

class Shroom():
    def eat_shroom(self):
        print("Now I am big")

class BigMario(Mario, Shroom):
    def grow(self):
        print("Now I am big")

class BigLuigi(BigMario):
    pass

bm = BigMario()
bm.move()
bm.grow()

bl = BigLuigi()
bl.move()
bl.grow()