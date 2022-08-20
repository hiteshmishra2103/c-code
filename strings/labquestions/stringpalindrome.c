#include <stdio.h>
#include <string.h>
int main(){
char str[100];
scanf("%s", str);
int a=strlen(str);
int flag=0;
for (int i = 0; i < strlen(str)/2; i++)
{ 
    if (str[i]==str[a-i-1])
    {
        flag=1;
    }
    else{
        flag=0;
        break;
    }
}
  if(flag){
      printf("\n This is a palindrome.");
  }      
  else{
      printf("\n This is not a palindrome.");
  }
return 0;
}