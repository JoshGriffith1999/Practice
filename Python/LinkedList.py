class Node():
    def __init__(self, key):
        self.data = key
        self.next = None

def insert(root, key):
    walker = root
    
    while walker.next not None:
        walker = walker.next
    