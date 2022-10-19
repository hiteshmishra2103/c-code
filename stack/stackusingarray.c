#include <stdio.h>
#define max 50
int push(int[], int);
int pop(int[], int);
void display(int[], int);

int main()
{
    int top = -1, front = -1, ch;
    int arr[max];
    do
    {
        printf("Enter 1 for push operation, Enter 2 for pop operation, Enter 3 for display operation, Enter 4 for exit.");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = push(arr, top);
            break;
        case 2:
            top = pop(arr, top);
            break;
        case3:
            display(arr, top);
            break;
        case 4:
            return 0;
        default:
            break;
        }
    } while (1);
    return 0;
}

int push(int arr[], int top)
{
    int val;
    if (top == max - 1)
    {
        printf("The stack is overflow.");
    }
    else
    {
        printf("enter the value: ");
        scanf("%d", &val);
            top += 1;
        arr[top] = val;
        return top;
    }
}

int pop(int arr[], int top)
{
    if (top == -1)
    {
        printf("The stack is underflow.");
    }
    else
    {
        printf("The deleted element is %d", arr[top]);
        top -= 1;
        return top;
    }
}

void display(int arr[], int top)
{
    if (top == -1)
    {
        printf("The stack is empty.");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d", arr[i]);
        }
    }
}