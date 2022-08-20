#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *p, *q;
    p=fopen("a.txt", "r");
    q=fopen("b.txt", "w");
    if(p==NULL||q==NULL){
        printf("One of file does not exist");
    }
    int ch;
    while ((ch=fgetc(p))!=EOF)
    {
        fputc(ch,q);
    }
    fclose(p);
    fclose(q);
    return 0;
}