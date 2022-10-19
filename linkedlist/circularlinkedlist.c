#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} node;

node* insert(node* head);
void display(node* head);

int main(){
    int ch; 
    node *head;
    head=NULL;
    do{
        printf("Enter 1 for insert. Enter 2 for display. Enter 3 for exit.");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head=insert(head);
            break;
        case 2:
            display(head);
        case 3:
            exit(0);
        default:
            break;
        }
    }
    while(1);
    return 0;
}

node* insert(node* head){
    int val;
    printf("enter the value: ");
    scanf("%d", &val);
    node* p;
    p=(node*)malloc(sizeof(node));
    p->info=val;
    p->next=NULL;
    if(head==NULL){
        head=p;
    }
    else{
        node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=p;
        p->next=head;
    }
    return head;
}

void display(node* head){
    node* temp=head;
    while(temp->next!=head){
        printf("%d", temp->info);
        temp=temp->next;
    }
    printf("%d", temp->info);
}