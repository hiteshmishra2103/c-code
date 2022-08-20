#include <stdio.h>
int main(){
    int n;
    printf("How many char you want to print from file from start: ");
    scanf("%d", &n);
    char str[n];
    FILE *fptr=fopen("b.txt", "r");
    
      fgets(str,n,fptr);

    printf("%s", str);
    fclose(fptr);
        return 0;  
}