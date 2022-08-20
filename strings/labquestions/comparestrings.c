#include <stdio.h>
#include <string.h>
int strcomp(char s1[], char s2[]);
int main(){
    char s1 [1000];
    char s2 [1000];
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string to compare: ");
    gets(s2);
    if(strcomp(s1,s2)){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal.");
    }
    return 0;
}
int strcomp(char s1[], char s2[]){
    
    int i=0;
    while(i<strlen(s1)&&i<strlen(s2)){
        if(s1[i]==s2[i]){
            i++;
        }
        else{
            return 0;
        }
    }
    return 1;
}
// int main(){
//     char s1[100];
//     char s2[100];
//     printf("Enter the first string: ");
//     gets(s1);
//     printf("Enter the second string to compare: ");
//     gets(s2);
//     int i=0;
//     while (i<strlen(s2))
//     {
//         if (s1[i]==s2[i])
//         {
//             i++;
//         }
//         else{
//           printf("Strings are not equal. ");
//           return 0;
//         }
          
//     }
//     printf("Strings are equal. ");
//     return 0;
//     }