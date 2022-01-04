from os import walk


class Node():
    def __init__(self, key):
        self.data = key
        self.next = None
        self.previous = None

class LinkedList():
    head = None
    tail = None
    
    #Used to insert into the beggining of the list
    def InsertBegginning(self, value):
        if self.head == None:
            self.head = Node(value)
            self.head.previous = self.tail
        else:
            newNode = Node(value)
            
            newNode.next = self.head
            newNode.previous = self.tail
            self.head = newNode
    
    #Used to insert at the end of the list
    def InsertEnd(self, value):
        if self.tail == None:
            self.tail = Node(value)
            self.tail.next = self.head
        else:
            newNode = Node(value)
            newNode.previous = self.tail
            newNode.next = self.head
            self.tail = newNode
    
    #Used to print the list forward
    def PrintListForward(self):
        if self.head == None:
            print("CANNOT PRINT LIST SINCE LIST IS EMPTY")
        else:
            walker = self.head
            
            #traverse the list and print each index
            while walker.next != self.tail:
                print(walker.data)
                walker = walker.next
            print(walker.data) #used to print last value in list
    
    
    #Used to print the list backwards
    def PrintListbackwards(self):
        if self.tail == None:
            print("CANNOT PRINT LIST SINCE LIST IS EMPTY")
        else:
            walker = self.tail
            
            #Traverse the list
            while walker.previous != self.head:
                print(walker.data)
                walker = walker.previous
            print(walker.data) #used to print last number in list


if __name__ == '__main__':
    list = LinkedList()
    """""
    list.InsertBegginning(1)
    list.InsertBegginning(2)
    list.InsertBegginning(3)
    list.InsertBegginning(4)
    list.InsertBegginning(5)
    list.InsertBegginning(6)
    list.InsertBegginning(7)
    list.InsertBegginning(8)
    list.InsertBegginning(9)
    list.InsertBegginning(10)
    list.PrintListForward()
    """
    
    list.InsertEnd(1)
    list.InsertEnd(2)
    list.InsertEnd(3)
    list.InsertEnd(4)
    list.InsertEnd(5)
    list.InsertEnd(6)
    list.InsertEnd(7)
    list.InsertEnd(8)
    list.InsertEnd(9)
    list.InsertEnd(10)
    list.PrintListForward()