#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
} node;

int max(int a, int b)
{
    return a > b ? a : b;
}

int getHeight(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

node *createNode(int data)
{
    node *n = (node *)malloc(sizeof(node));
    n->left = NULL;
    n->key = data;
    n->right = NULL;
    n->height = 1;
    return n;
}

int getBalanceFactor(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->right), getHeight(y->left));

    x->height = max(getHeight(x->right), getHeight(x->left));

    return x;
}

node *leftRotate(node *x)
{
    node *y = x->right;
    node *t2 = y->left;

    y->left = x;
    x->right = t2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    return y;
}

node *insertNode(node *n, int key)
{
    if (n == NULL)
    {
        return createNode(key);
    }

    if (key == n->key)
    {
        printf("The Key is already present! Please enter different key for insertion!\n");
    }
    else if (key < n->key)
    {
        n->left = insertNode(n->left, key);
    }
    else
    {
        n->right = insertNode(n->right, key);
    }

    n->height = 1 + max(getHeight(node->left), getHeight(node->right));//updating the height of 

    int bf = getBalanceFactor(n);

    // left-left case

    if (bf > 1 && key < n->left->key)
    {
        return rightRotate(n);
    }

    // right-right case

    else if (bf < 1 && key > n->right->key)
    {
        return leftRotate(n);
    }

    // left-right case

    else if (bf > 1 && key > n->left->key)
    {
        n->left = leftRotate(n->left); // first left rotate w.r.t the child of first imbalance node
        return rightRotate(n);         // then right rotate w.r.t the first imbalance node
    }

    // right-left case

    else if (bf < -1 && key < n->right->key)
    {
        n->right = rightRotate(n->right); // first right rotate w.r.t the child of first imbalance node
        return leftRotate(n);             // then right rotate the first imbalance node
    }

    return n;
}

void preorder(node *n)
{
    if (n != NULL)
    {
        printf("%d ", n->key);
        preorder(n->left);
        preorder(n->right);
    }
}

int main()  
{

    struct node *root = NULL;
    int ch;

    do
    {
        printf("Enter 1 for insertion, 2 for display,  3 for exit! \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to insert: ");
            int val;
            scanf("%d", &val);
            root = insertNode(root, val);
            break;
        case 2:
            printf("The preoder traversal is: ");
            preorder(root);
        case 3:
            exit(0);
        }
    } while (1);

    return 0;
}