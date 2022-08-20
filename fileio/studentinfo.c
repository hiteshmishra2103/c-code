#include <stdio.h>
int main(){
    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);
    char name[n][100];
    char gender[n][1];
    int age[n];
    FILE *fptr=fopen("studentinfo.txt", "w");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d details: ", i+1);
        printf("\nName: ");
        scanf("%s", &name[i]);
        printf("\nGender: ");
        scanf("%s", &gender[i]);
        printf("\nAge: ");
        scanf("%d", &age[i]);
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(fptr, "Name: %s\n", name[i]);
        fprintf(fptr, "Gender: %s\n", gender[i]);
        fprintf(fptr, "Age: %d\n", age[i]);
    }
    
    return 0;
}