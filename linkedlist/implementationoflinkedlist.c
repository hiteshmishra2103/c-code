#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} node;

node *insert(node *head);
void display(node *head);
node *deleteFirst(node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

void deleteAtIndex(node *head, int index)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    node *p = head;
    node *q = head->next;
    if (index == 0)
    {
        printf("Enter 3 for deleting first node!\n");
        exit(0);
    }
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
}

void deleteLastNode(node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    node *p = head;
    node *q = head->next;
    if (q == NULL)
    {
        printf("There is only one node in the linked list, Enter 3 for deleting it!\n");
        exit(0);
    }
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
}

node *deleteWithValue(node *head, int nval)
{
    node *q = head->next;
    node *p = head;
    if (head == NULL)
    {
        printf("List is empty!");
        exit(0);
    }
    else if (q == NULL)
    {
        head = NULL;
        free(p);
        return head;
    }
    else
    {
        while (q->info != nval)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        free(q);
        return head;
    }
}

int main()
{
    node *head = NULL;
    int ch, index, nval;
    do
    {
        printf("Enter 1 for insert, Enter 2 for display, Enter 3 for deleting first node, 4 for deleting last node, 5 for deleting a node from index, 6 for deleting a node with given value, 7 for exit : \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = insert(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            head = deleteFirst(head); // for deleting the first element of linked list
            break;
        case 4:
            printf("Enter the index of node to delete: ");
            scanf("%d", &index);
            deleteAtIndex(head, index);
            break;

        case 5:
            deleteLastNode(head);
            break;
        case 6:
            printf("Enter the value to delete: \n");
            scanf("%d", &nval);
            head=deleteWithValue(head, nval);
            break;

        default:
            break;
        }
    } while (1);
    return 0;
}

node *insert(node *head)
{
    int val;
    node *p = (node *)malloc(sizeof(node));
    ;
    printf("Enter the value: ");
    scanf("%d", &val);
    p->info = val;
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
    return head;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->info);
        temp = temp->next;
    }
}