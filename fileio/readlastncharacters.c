//read last 10 characters and then store
// rewrite those characters in same file
//replacing the spaces with dollar sign.
#include <stdio.h>
int main(){
    FILE *fptr=fopen("ad.txt", "r");
    if(fptr==NULL){
        printf("Error in opening a file.");
    }
    fseek(fptr, -10, SEEK_END);
    char str[10];
    printf("%d", ftell(fptr));
    fgets(str, 10, fptr);
    int i=0; 
    while(str[i]!='\0'){
        if(str[i]==' '){
            str[i]='$';
        }
        i++;
    }
    fclose(fptr);
    FILE *fptr1=fopen("ad.txt", "w");
    fputs(str, fptr);
    fclose(fptr1);
    return 0;
}