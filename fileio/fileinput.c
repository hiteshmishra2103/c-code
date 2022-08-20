#include <stdio.h>
int main(){
 FILE *fptr;
 fptr=fopen("text.txt", "w");
 char ch;
putc('H', fptr);
putc('i', fptr);
putc('t', fptr);
putc('e',fptr);
putc('s',fptr);
putc('h',fptr);

//  fscanf(fptr, "%c", &ch); 
//  printf("%c", ch);

 fclose(fptr);
 return 0;
 }