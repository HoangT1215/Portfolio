#Binary search tree
class Node:
    def __init__(self, val):
        self.l_child = None
        self.r_child = None
        self.parent = None
        self.data = val

def insert(root, node):
    if root is None:
        root = node
        node.parent = None
    else:
        if root.data > node.data:
            if root.l_child is None:
                root.l_child = node
                node.parent = root
            else:
                insert(root.l_child, node)
        else:
            if root.r_child is None:
                root.r_child = node
                node.parent = node
            else:
                insert(root.r_child, node)

def search(root, value):
    # Your code goes here
    if (root == None) or (value == root.data):
        return value
    else:
        if (value < key[root]):
            search(root.l_child,value)
        else:
            search(root.r_child,value)

def order_traversal(node):
    if node != None:
        order_traversal(node.l_child)
    print(node.data,' ')
    order_traversal(node.r_child)
