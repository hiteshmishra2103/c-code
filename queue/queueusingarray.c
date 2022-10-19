#include <stdio.h>
#define max 50
int insert(int[], int, int*);
int del (int[], int);
void display(int[], int, int);

int main()
{
    int front = -1, rear = -1, ch, arr[max];
    int *f=&front;
    do
    {
        printf("Enter 1 for insert, Enter 2 for delete, Enter 3 for display, Enter 4 for exit.");
        printf("Enter your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            rear = insert(arr, rear, f);
            break;
        case 2:
            front = del (arr, rear);
            break;
        case 3:
            display(arr, front, rear);
            break;
        case 4:
            return 0;

        default:
            break;
        }
    } while (1);
}

int insert(int arr[], int rear, int *front)
{
    if(rear==max-1)
    {
        printf("The queue is overflow.");
    }
    else
    {
        if(*front==-1){
            *front+=1;
        }
        int val;
        printf("Enter the value to insert.");
        scanf("%d", &val);
        rear+=1;
        arr[rear]=val;
        return rear;
    }
}

int del(int arr[], int front){
    if(front==-1){
        printf("The queue is underflow.");
    }
    else{
        printf("The deleted element from queue is %d", arr[front]);
        front+=1;
        return front;
    }
}

void display(int arr[], int front, int rear){
    if(front==-1){
        printf("The queue is empty");
    }
    else{
        for (int i = front; i <=rear; i++)
        {
            printf("%d", arr[i]);
        }
    }
}