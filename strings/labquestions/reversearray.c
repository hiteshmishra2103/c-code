// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
int arr[n];
for(int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
printf("Original array: ");
for(int i=0; i<n; i++){
printf(" %d", arr[i]);
}
for(int i=0; i<n/2; i++){
int l=arr[i];
arr[i]=arr[n-1-i];
arr[n-1-i]=l;
}
printf("\nreversed array: ");
for(int i=0; i<n; i++){
printf(" %d", arr[i]);
}
return 0;
}