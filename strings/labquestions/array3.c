#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }
    for(int i=1; i<n;i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int l=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=l;
            }
        }
    }
for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
}
return 0;}