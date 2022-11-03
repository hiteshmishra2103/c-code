#include <stdio.h>
#include <stdlib.h>
#define max 50;

int push(int arr[], int top){
int val;
printf("Enter the value: ");
scanf("%d", &val);
if(top==max-1){
    printf("queue overflow!");
}
else{
    top=top+1;
    array[top]=val;
}
}

int main(){

}