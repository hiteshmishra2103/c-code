#include <stdio.h>
int main(){
    FILE *fptr=fopen("text.txt", "r+");
    char ch;
    int i=0;
    char str[102];
    fgets(str, 101, fptr);    
    while(str[i]!='\0'){

        if(str[i]==' '){
            str[i]='$';
        }
        i++;
    }
    rewind(fptr);
    fputs(str, fptr);
    fclose(fptr);
    return 0;
}