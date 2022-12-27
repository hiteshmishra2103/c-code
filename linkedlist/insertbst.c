#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
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

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

struct node *searchIter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;

    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    struct node *n = createNode(key);

    if (key < prev->data)
    {
        prev->left = n;
    }
    else
    {
        prev->right = n;
    }
}

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{
    // logic for checking if node of given value exists

    struct node *temp = root;

    while (temp != NULL)
    {
        if (value == temp->data) // if key found then break the loop
        {
            break;
        }
        else if (value < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    if (temp == NULL)
    {
        printf("\n The node is not present of value entered!\n");
        return NULL;
    }

    // logic for searching and deleting that value

    struct node *iPre;

    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        // it leaf node is found then delete that node and return null
        free(root);
        return NULL;
    }

    // searching for the node to be deleted
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    // deletion strategy when the node is found
    else
    {
        iPre = inOrderPredecessor(root); // null
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

// struct node *countLeafNodes(struct node *root)
// {
// }

int countTotalNodes(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return countTotalNodes(root->left) + countTotalNodes(root->right) + 1;
        // 1 is added for counting of root node
    }
}

int countLeafNodes(struct node *root)
{
    if (root == NULL)

    {
        return 0;
    }

    else if (root->left == NULL && root->right == NULL)

    {
        return 1;
    }

    else

    {
        return countLeafNodes(root->left) + countLeafNodes(root->right);
    }
}

int countNonLeafNodes(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    else if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    else
    {
        return countNonLeafNodes(root->left) + countNonLeafNodes(root->right) + 1;
    }
}

struct node *largestNode(struct node *root)
{
    if (root == NULL || tree->right == NULL)
    {
        return root;
    }


    else{
        return largestNode(root->right);
    }

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

    inOrder(p);
    printf("\n");
    printf("\nTotal no. of nodes are: %d\n", countTotalNodes(p));
    printf("\nTotal no. of leaf nodes are: %d\n", countLeafNodes(p));
    printf("\nTotal no. of non-leaf nodes are: %d\n", countNonLeafNodes(p));

    deleteNode(p, 1);
    inOrder(p);

    printf("\nTotal no. of nodes after deletion are: %d\n", countTotalNodes(p));
    printf("\nTotal no. of leaf nodes after deletion are: %d\n", countLeafNodes(p));
    printf("\nTotal no. of non-leaf nodes after deletion are: %d\n", countNonLeafNodes(p));

    return 0;
}
