class TreeTraversal:
    def __init__(self, x):
        self.x = x
        self.l_side = None
        self.r_side = None


def POST_Traversal(Root_node):
   if Root_node == None:
        return
   POST_Traversal(Root_node.l_side)
   POST_Traversal(Root_node.r_side)
   print(Root_node.x)

def New(Root_node, n):
    if Root_node is None:
        Root_node = TreeTraversal(n)
        return Root_node
    if n < Root_node.x:
        Root_node.l_side = New(Root_node.l_side, n)
    else:
        Root_node.r_side = New(Root_node.r_side, n)
    return Root_node

Root_node = New(None, 32)
New(Root_node, 20)
New(Root_node, 48)
New(Root_node, 13)
New(Root_node, 21)
New(Root_node, 28)
New(Root_node, 55)
print("PostOrder-Tree-Traversal:")
POST_Traversal(Root_node)
