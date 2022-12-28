#include <stdio.h>
#include <stdlib.h>
#define max 100

int insert(int arr[], int rear)
{
    int val;
    printf("Enter the value: ");
    scanf("%d", &val);
    if (rear == max - 1)
    {
        printf("\nQueue overflow!\n");
    }
    else
    {
        rear += 1;
        arr[rear] = val;
    }
    return rear;
}

int delete(int arr[], int front)
{
    if (front == -1)
    {
        printf("\nThe queue is underflow!\n");
    }
    else
    {
        printf("The deleted element is %d", arr[front]);
        front += 1;
    }
    
    return front;
}

void display(int arr[], int front, int rear)
{
    if (front == -1 || rear == -1)
    {
        printf("\nThe queue is empty!\n");
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[max];
    int front=-1,rear=-1, ch;

    do
    {
        printf("Enter 1 for insert, Enter 2 for delete, Enter 3 for display, Enter 4 for exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (front == -1)
            {
                front = 0;
            }
            int rear = insert(arr, rear);
            break;
        case 2:
            front = delete (arr, front);
            break;
        case 3:
            display(arr, rear, front);
            break;
        case 4:
            exit(0);

        default:
            break;
        }
    } while (1);

}