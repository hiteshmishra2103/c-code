#include <stdio.h>
void swap(int *, int *);
int main(){
    int a, b;
    printf("Enter the numbers to be swapped: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("Swapped values: %d %d ", a, b);
    return 0;
}
void swap(int *a, int*b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}