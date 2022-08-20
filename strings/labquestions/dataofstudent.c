#include <stdio.h>
#include <string.h>
int main(){
    struct student{
        char name[100];
        char gender[1];
    };
    struct student s1;
    struct student s2;
    strcpy(s1.name,"Ronaldo");
    strcpy(s1.gender, "M");
    strcpy(s2.name,"Messi");
    strcpy(s2.gender, "M");
    
    printf("%s", s1.name);
    printf("\n%s", s1.gender);  
    printf("\n%s", s2.name);
    printf("\n%s", s2.gender);   
    return 0; 
}