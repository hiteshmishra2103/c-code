#include <stdio.h>
int main(){
   FILE *fptr;
   fptr=fopen("a.txt", "w+");
   if(fptr==NULL){
    printf("The file does not exist.");
   } 
   int ch;
   int sum=0;
   while(fscanf(fptr, "%d", &ch)!=EOF){
    sum=sum+ch;
   }
   fprintf(fptr,"%d", sum);
   return 0;
}