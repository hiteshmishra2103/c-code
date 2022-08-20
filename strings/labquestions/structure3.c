#include <stdio.h>
#include <string.h>
typedef struct employee{
    char *name;
    int code;
    int sales;
}emp;
int main(){
    int n;
    printf("Enter the no. of employees: ");
    scanf("%d", &n);
    emp e1[n];
    for(int i=0; i<n; i++){
        printf("\nEnter the name of %d Employee: ", i+1);
        scanf("%s", &e1[i].name);
        printf("\nEnter the code of %d Employee: ", i+1);
        scanf("%d", &e1[i].code);
        printf("\nEnter the sales of %d Employee: ", i+1);
        scanf("%d", &e1[i].sales);
    }
    int tsales;
    int asales;
    for(int i=0; i<n; i++){
       tsales+=e1[i].sales;
    }
    asales=tsales/n;
    printf("\nTotal sales: %d", tsales);
    printf("\nAverage sales: %d", asales);
}