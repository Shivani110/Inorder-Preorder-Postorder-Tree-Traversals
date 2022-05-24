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
void PRE_Traversal(struct node* Root_node)  
{  
    if (Root_node == NULL)  
        return;  
    cout<<" "<<Root_node->n<<" ";  
    PRE_Traversal (Root_node->l_side);  
    PRE_Traversal(Root_node->r_side);  
}  
int main()  
{  
    struct node* Root_node = New(30);  
    Root_node->l_side = New(20);  
    Root_node->r_side = New(40);  
    Root_node->l_side->l_side = New(11);  
    Root_node->l_side->r_side = New(23);      
    Root_node->r_side->l_side = New(35);  
    Root_node->r_side->r_side = New(50);    
    
	cout<<"\n PreOrder-Tree-Traversal:\n";  
    PRE_Traversal(Root_node);  
    return 0;  
}  
