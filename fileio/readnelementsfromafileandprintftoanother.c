#include <stdio.h>
int main(){
    int n;
    printf("How many characters you want to write from one file to other: ");
    scanf("%d", &n);
    FILE *p, *q;
    p=fopen("a.txt", "r");
    q=fopen("b.txt", "w");
    char *str;
    fgets(str,n,p);
    fputs(str,q);
    fclose(p);
    fclose(q);
    return 0;
}