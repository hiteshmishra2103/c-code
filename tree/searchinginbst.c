
#include <stdio.h>
#include <malloc.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data;                                 // Setting the data
    n->left = NULL;                                 // Setting the left and right children to NULL
    n->right = NULL;                                // Setting the left and right children to NULL
    return n;                                       // Finally returning the created node
}

// void preOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

int isBst(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBst(root->left))
            return 0;

        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBst(root->right);
    }
    else
    { // empty tree is considered a binary search tree
        return 1;
    }
}

struct node *recursiveSearch(struct node *root, int key)
{
    if (root == NULL) // if element is not found, then the root will be at leaf node
    {
        return NULL; // return null in case of key not found!
    }
    else if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return recursiveSearch(root->left, key);
    }
    else
    {
        return recursiveSearch(root->right, key);
    }
}

struct node *searchIter(struct node *root, int key)
{
    struct node *temp = root;

    while (temp != NULL)
    {
        if (temp->data == key)
        // if key is equal to temp->data then return the address of key
        {
            return root;
        }
        else if (key < temp->data)
        // if key is less than temp->data then move to the left subtree
        {
            temp = temp->left;
        }
        else
        {
            // if key is greater than temp->data then move to the right subtree
            temp = temp->right;
        }
    }

    // if key is not found return NULL

    return NULL;
}

int main()
{

    // Constructing the root node - Using Function (Recommended)

    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    // Finally The tree looks like this:
    // This is a binary tree
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4

    // Linking the root node with left and right children

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("%d", isBst(p));

    // if (recursiveSearch(p, 8) == NULL)
    // {
    //     printf("\nThe key is not present in the tree!\n");
    // }

    // else
    // {
    //     printf("\nThe key is found at address: %d", recursiveSearch(p, 8));
    // }

    if (searchIter(p, 5) == NULL)
    {
        printf("\nThe key is not present in the tree!\n");
    }

    else
    {
        printf("\nThe key is found at address: %d", searchIter(p, 5));
    }

    return 0;
}
