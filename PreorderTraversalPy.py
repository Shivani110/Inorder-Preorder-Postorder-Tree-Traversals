class TreeTraversal:
    def __init__(self, x):
        self.x = x
        self.l_side = None
        self.r_side = None


def PRE_traversal(Root_node):
   if Root_node == None:
        return
   print(Root_node.x)
   PRE_traversal(Root_node.l_side)
   PRE_traversal(Root_node.r_side)


def New(Root_node, n):
    if Root_node is None:
        Root_node = TreeTraversal(n)
        return Root_node
    if n < Root_node.x:
        Root_node.l_side = New(Root_node.l_side, n)
    else:
        Root_node.r_side = New(Root_node.r_side, n)
    return Root_node

Root_node = New(None, 30)
New(Root_node, 20)
New(Root_node, 40)
New(Root_node, 11)
New(Root_node, 23)
New(Root_node, 35)
New(Root_node, 50)
print("PreOrder-Tree-Traversal:")
PRE_traversal(Root_node)
