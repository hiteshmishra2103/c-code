#include <stdio.h>
#include <stdlib.h>
#define max 5

void DFS(int adj[][max], int visited[], int start)
{
    int stack[max];
    int top = -1, i;
    printf("%c-", start + 65);
    visited[start] = 1;

    stack[++top] = start;

    while (top != -1)
    {
        start = stack[top];

        for (int i = 0; i < max; i++)
        {
            if (adj[start][i] == 1 && visited[i] == 0)
            {
                stack[++top] = i;
                printf("%c-", i + 65);
                visited[i] = 1;
                break;
            
            }
        }
        if (i == max)
        {
            top--;
        }
    }
}

int main()
{
    int adj[max][max];
    int visited[max] = {0}, i, j;

    printf("\n Enter the adjacency matrix: ");
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("DFS Traversal: ");
    DFS(adj, visited, 0);
    printf("\n");
    return 0;
}