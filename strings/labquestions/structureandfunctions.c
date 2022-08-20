#include <stdio.h>
#include <string.h>
struct student
{
    char *name;
    int age;
};
void printinfo(struct student s1){
printf("\n%s", s1.name);
printf("\n%d", s1.age);
}
int main(){
    struct student s1;
    s1.age=13;
    s1.name="john";
    printinfo(s1);
    return 0;
}