#include <stdio.h>
int main(){
    FILE *f;
    f=fopen("b.txt", "w");
    int ch;
    printf("To exit press Ctrl+d/");
    while (scanf("%d", &ch)!='\n')
    {
        if(ch=='\n'){
            break;
        }
        if(ch==' '){
            fprintf(f,"%c", ch);
        }
       fprintf(f,"%d", ch);
    }
    fclose(f);
    return 0;
    
}