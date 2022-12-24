#include <stdio.h>
#define size 100


//best case time complexity=O(nlogn) and worst case=O(n^2);
//quick sort does not require another array to sort an array, it changes the given array to sort it

int partition(int arr[], int beg, int end)
{
    int left, right, loc, flag;
    loc = left = beg;
    right = end; // right= last index of array
    flag = 0;

    while (flag != 1)
    {
        while (arr[loc] <= arr[right] && loc != right)
        {
            right--;
        }
        if (loc == right)
        {
            flag = 1;
        }
        else if (arr[loc] > arr[right]) 
        // if arr[right]<= pivot element then we interchange them and
        // set loc=right
        {
            int temp = arr[loc];
            arr[loc] = arr[right];
            arr[right] = temp;
            loc = right;
        }
        if (flag != 1)
        {
            while (arr[loc] >= arr[left] && (loc != left))
            {
                left++;
                if (loc == left)
                {
                    flag = 1;
                }
                else if (arr[loc] < arr[left])
                {
                    int temp = arr[loc];
                    arr[loc] = arr[left];
                    arr[left] = temp;
                    loc = left;
                }
            }
        }
    }
}

void quick_sort(int a[], int beg, int end)
{
    int loc;
    if (beg < end)//it will stop when array will become empty or only one element is left in array
    {
        loc = partition(a, beg, end);
        quick_sort(a, beg, loc - 1);//sorting the left subarray
        quick_sort(a, loc + 1, end);//sorting the right subarray
    }
}

int main()
{

    int arr[size];
    int i,n;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quick_sort(arr, 0, n - 1);
    printf("\n Sorted Array is: \n");

    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}