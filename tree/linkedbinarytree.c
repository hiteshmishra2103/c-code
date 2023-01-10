#include <stdio.h>

typedef struct node
{

    struct node *left;
    int info;
    struct node *right;
    
} node;

node *createNode(int data)
{

    node *p;
    p = (node *)malloc(sizeof(node)); // Allocating the memory in the heap
    p->left = NULL;                   // Setting the left children to null
    p->info = data;                   // setting the data
    p->right = NULL;                  // setting the right children to null
    return p;

}

int main()
{

    node *p = createNode(2);
    node *p1 = createNode(3);
    node *p2 = createNode(5);

    // linking the root node
    p->left = p1;
    p->right = p2;

    return 0;

}