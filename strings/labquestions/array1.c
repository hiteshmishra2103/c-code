#include <stdio.h>
#include <string.h>
void printsum(int *ptr, int n, int *arr){
    for (int i = 0; i <n; i++)
{
    scanf("%d", &arr[i]);
    *ptr=*ptr+arr[i];
}
}
int main(){
int n;
scanf("%d", &n);
int arr[n];
int sum=0;
int *ptr=&sum;
printsum(ptr, n, &arr);
printf("%d", sum);
return 0;

}