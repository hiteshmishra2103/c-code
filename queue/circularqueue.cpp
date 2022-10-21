#include <stdio.h>
#include <stdlib.h>
#define max 50;

int insert(int arr[], int rear, int front)
{
    int val;
    if ((front == 0 && rear == max - 1) || (rear == front - 1))
    {
        printf("Queue Overflow!");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d", &val);
        if (rear == max - 1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = val;
        }
        return (rear);
    }
}

int delete (int arr[], int rear, int front)
{
    int val;
    if (front == -1)
    {
        printf("Queue underflow!");
    }
    else
    {
        printf("Deleted element=%d", arr[front]);

            if (front == max - 1 && rear != max - 1)
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
        return front;
    }
}

void display(int arr[], int rear, int front)
{
    if (front == -1)
    {
        printf("Underflow condition!")
    }
    if (front < rear)
    {
        for (int i = 0; i < rear; i++)
        {
            printf("%d", arr[i]);
        }
    }
    else
    {
        for (int i = 0; i < max - 1; i++)
        {
            printf("%d", arr[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("%d", arr[i]);
        }
    }
}
int main()
{
int front=-1,rear=-1,arr[max], ch;
do{
    printf("Enter 1 for insert, Enter 2 for delete, Enter 3 for display, Enter 4 for exit.");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        int rear=insert(arr, rear, front);
        break;
    case 2:
        front=delete(arr, rear, front);
        break;
    case 3:
        display(arr, rear, front);
        break;
    case 4:
        exit(0);
    
    default:
        break;
    }
}
}