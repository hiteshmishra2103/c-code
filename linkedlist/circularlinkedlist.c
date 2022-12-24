#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} node;

node *insert(node*head)
{

    node *p = (node*)malloc(sizeof(node));
    int val;
    printf("Enter the value: ");
    scanf("%d", &val);

    p->info = val;

    if (head == NULL)
    {
        head = p;
        p->next = head; // pointing to the head node
        return head;
    }
    else
    {

        node *temp = head;

        while (temp->next != head)

        {
            temp = temp->next;
        }

        temp->next = p;
        p->next = head;
    }
    return head;
}

void display(node*head)
{
    node *temp = head;

    do
    {
        printf("%d\n", temp->info);
        temp = temp->next;
    } while (temp!= head);
}

void deleteLastNode(node*head)
{
    node *p = head;
    node *q = head->next;

    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = head; // pointing second last node to null
    free(q);        // deleting last node
}

int main()
{
    int ch;
    node*head = NULL;

    do
    {
        printf("Enter 1 for inserting the node, 2 for deleting the last node, 3 for displaying the list, 4 for exit.\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            head = insert(head);
            break;
        case 2:
            deleteLastNode(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }while(1);
}