#include <stdio.h>
#include <string.h>
int main(){
    char ch[1000];
    int i=0, ccount=0, wcount=0;
    printf("Enter your sentence: ");
    gets(ch);
    while (ch[i]!='\0')
    {
        if (ch[i]==' ')
        {
            wcount+=1;
            ccount+=1;
        }
        else{
            ccount+=1;
        }
        i++;
    }
    printf("%d ", wcount);
    printf("%d", ccount);
}