#include <stdio.h>
#include <string.h>
int main(){
  char s[1000];
  int length=0;
  gets(s);
  int i=0;
  while(s[i]!='\0'){
    length++;
    i++;
  }
  printf("%d", length);
  return 0;
}