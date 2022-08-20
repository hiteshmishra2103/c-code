#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr=fopen("a.txt","w+");
    char str[100];
    int i=0;
    gets(str);
    int l=strlen(str);
    for(int i=0;i<=l;i++)
    {
        if(i==0||str[i-1]==' ')
        {
            if(str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='e'&&(str[i+3]==' '||str[i+3]=='\0'))
                i+=3;
            else if(str[i]=='a'&&(str[i+1]==' '||str[i+1]=='\0'))
                continue;
            else if(str[i]=='a'&&str[i+1]=='n'&&(str[i+2]==' '||str[i+2]=='\0'))
                i+=2;
        }
        fputc(str[i],ptr);
    }
    return 0;
}