class TreeTraversal:
    def __init__(self, x):
        self.x = x
        self.l_side = None
        self.r_side = None


def IN_traversal(Root_node):
   if Root_node == None:
        return
   IN_traversal(Root_node.l_side)
   print(Root_node.x, end=" ,")
   IN_traversal(Root_node.r_side)


def New(Root_node, n):
    if Root_node is None:
        Root_node = TreeTraversal(n)
        return Root_node
    if n < Root_node.x:
        Root_node.l_side = New(Root_node.l_side, n)
    else:
        Root_node.r_side = New(Root_node.r_side, n)
    return Root_node


Root_node = New(None, 41)
New(Root_node, 30)
New(Root_node, 56)
New(Root_node, 23)
New(Root_node, 35)
New(Root_node, 52)
New(Root_node, 60)
print("Inorder-Tree-Traversal:")
IN_traversal(Root_node)
