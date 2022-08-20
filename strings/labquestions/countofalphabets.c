#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    int acount=0, dcount=0;
    int i=0;
    printf("Enter the string: ");
    scanf("%s", s);

    while (i<strlen(s))
    {
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122){
            acount++;
        }
        else if(s[i]>=48||s[i]<=57){
            dcount++;
        }
        i++;
    }
    printf("Total number of alphabets present: %d\n", acount);
    printf("Total number of digits present: %d", dcount);
    return 0;
}