#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} node;

node *insert(node *head)
{
    node *p = (node*)malloc(sizeof(node));
    int val;

    printf("Enter the value: \n");
    scanf("%d", &val);

    p->info = val;
    p->next=NULL;
    if (head == NULL)
    {
        head = p;
        return head;
    }

    else
    {
        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = p;
        p->next = NULL;
    }

    return head;
}

void displayEvenInfo(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->info % 2 == 0)
        {
            printf("%d\n", temp->info);
        }
        else
        {
            temp = temp->next;
            continue;
        }
        temp = temp->next;
    }
}

void displayOddInfo(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->info % 2 != 0)
        {
            printf("%d\n", temp->info);
        }
        else
        {
            temp = temp->next;
            continue;
        }
        temp = temp->next;
    }
}

void displayAlternateNodes(node*head){
    node*temp=head;

    while(temp!=NULL){
        printf("%d\n", temp->info);
        temp=temp->next->next;//skipping the next element
    }
}



int main()
{

    node*head = NULL;
    int ch;

    do
    {
        printf("Enter 1 for insertion, 2 for displaying nodes with even info, 3 for displaying nodes with odd info, 4 to display alternate nodes, 5 to exit.\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = insert(head);
            break;
        case 2:
            displayEvenInfo(head);
            break;
        case 3:
            displayOddInfo(head);
            break;
        case 4:
            displayAlternateNodes(head);
            break;
        case 5:
            exit(0);
        }
    } while (1);

    return 0;
}