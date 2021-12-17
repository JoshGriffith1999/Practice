#binary Search tree in python

#Node class to use
class Node():
    def __init__(self, key):
        self.data = key
        self.left = None
        self.right = None

#Insert Function
def insert(key, root):
    if root is None:
        return Node(key)
    else:
        if root.data == key:
            return root
        elif key < root.data:
            root.left = insert(key, root.left)
        else:
            root.right = insert(key, root.right)
    return root

#Search function
def search(key, root):
    if root is None or root.data == key:
        return root
    elif key < root.data:
        return search(key, root.left)
    else:
        return search(key, root.right)   

#Print preorder
def preOrder(root):
    if root:
        print(root.data)
        postOrder(root.left)
        postOrder(root.right)

#Print inorder
def inOrder(root):
    if root:
        inOrder(root.left)
        print(root.data)
        inOrder(root.right)

#Print postorder
def postOrder(root):
    if root:
        postOrder(root.left)
        postOrder(root.right)
        print(root.data)

root = Node(50)
root = insert(30, root)
root = insert(20, root)
root = insert(40, root)
root = insert(70, root)
root = insert(60, root)
root = insert(80, root)

y = search(30, root)
print("Search:", y.data)
#inOrder(root)
#postOrder(root)
#preOrder(root)