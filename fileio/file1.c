#include <stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("text.txt", "w");//if file don't exist then 
    //file pointer will point to NULL
    // to check if the file exist or not
    if (fptr=NULL)
    {
        printf("The file doesn't exist.");
    }
    else{
        fclose(fptr);
    }
        return 0;
}