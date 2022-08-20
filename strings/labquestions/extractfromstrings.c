#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    printf("Enter the string: ");
    gets(str);
    int a=strlen(str);
    int m;
    printf("From where you want to extract: ");
    scanf("%d", &m);
    int n;
    printf("\n Upto which you want to extract: ");
    scanf("%d", &n);
    for (int i = m-1; i <n ; i++)
    {
       printf("%c", str[i]);
    }
    
}