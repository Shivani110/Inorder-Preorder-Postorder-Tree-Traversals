#include <bits/stdc++.h>  
using namespace std;  
struct node {  
    int n;  
    struct node* l_side;  
    struct node* r_side;  
};    
struct node* New(int x)  
{  
    struct node* m = (struct node*)malloc(sizeof(struct node));  
    m->n = x;  
    m->l_side = NULL;  
    m->r_side = NULL;  
    return (m);  
}  

void IN_traversal(struct node* Root_node)  
{  
    if (Root_node == NULL)  
        return;  
    IN_traversal(Root_node->l_side);  
    cout<<" "<<Root_node->n<<" ";  
    IN_traversal(Root_node->r_side);  
}  
int main()  
{  
    struct node* Root_node = New(41);  
    Root_node->l_side = New(30);  
    Root_node->r_side = New(56);  
    Root_node->l_side->l_side = New(23);  
    Root_node->l_side->r_side = New(35);    
    Root_node->r_side->l_side = New(52);  
    Root_node->r_side->r_side = New(60);  
     
    cout<<"\n Inorder_Tree_Traversal \n";  
    IN_traversal(Root_node);  
    return 0;  
}  

