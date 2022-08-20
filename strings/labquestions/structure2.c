#include <stdio.h>
#include <string.h>
typedef struct employee{
    char *name;
    int code;
    int salary;
}e;
void printinfo(struct employee e1){
 printf("%s", e1.name);
 printf("\n%d", e1.code);
 printf("\n%d", e1.salary);
}
int main(){
    e e1={"Johne", 1212, 34556};
    printinfo(e1);
    return 0;
}