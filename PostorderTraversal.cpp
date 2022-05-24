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
void POST_Traversal(struct node* Root_node)  
{  
    if (Root_node == NULL)  
        return;  
    POST_Traversal(Root_node->l_side);  
    POST_Traversal(Root_node->r_side);  
    cout<<" "<<Root_node->n<<" ";  
}  
  
int main()  
{  
    struct node* Root_node = New(32);  
    Root_node->l_side = New(20);  
    Root_node->r_side = New(48);  
    Root_node->l_side->l_side = New(13);  
    Root_node->l_side->r_side = New(21);  
    Root_node->r_side->l_side = New(28);  
    Root_node->r_side->r_side = New(55);  
      
    cout<<"\n PostOrder-Tree-Traversal:\n";  
    POST_Traversal(Root_node);  
    return 0;  
} 
