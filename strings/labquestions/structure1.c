#include <stdio.h>
#include <string.h>
int main(){
    //Structure is a user defined data type, that is used
    //to store data of different data types
    struct student {
        char name[100];
        int rollno;
        char course[100];
        char branch[100];        
    };
    struct student CSE[100];//This is the array of 
    //data type "struct student" which is user defined
    //and CSE is the variable name of data type struct
    //student.
    strcpy(CSE[0].name,"Narendra Modi");
    strcpy(CSE[0].branch,"Prime Minister");
    strcpy(CSE[0].course,"Politics");
    CSE[0].rollno=1;
    printf("\n%s", CSE[0].name);
    printf("\n%s", CSE[0].branch);
    printf("\n%s", CSE[0].course);
    printf("\n%d", CSE[0].rollno);
    return 0;}