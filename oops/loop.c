#include <stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = row; i > 0; i--)
    {
        for (int j = col; j >=1; j--)
        {
            printf("%d", i);
        }
        printf("\n");
        
    }
    return 0;
}