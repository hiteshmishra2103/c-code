#include <stdio.h>
int main(){
    FILE* fptr;
    fptr=fopen("text.txt", "r");
    char ch;
    while( (ch=fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
fclose(fptr);
return 0;    
}