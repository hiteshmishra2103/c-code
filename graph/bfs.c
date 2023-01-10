#include <stdio.h>
#include <stdlib.h>

#define max 5

void bfs(int adj[][max], int visited[], int start)
{
    int queue[max], rear = -1, front = -1, i;

    queue[++rear] = start; // adding the start node to queue
    visited[start] = 1;    // updating the index of that node to 1

    while (rear != front) // checking if queue is empty

    {
        start = queue[++front];

        printf("%c\t", start + 65);

        for (i = 0; i < max; i++)
        {
            if (adj[start][i] == 1 && visited[i] == 0)
            {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int visited[max] = {0};

    int adj[max][max], i, j;

    printf("Enter adjacency matrix: ");

    for (int i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    bfs(adj, visited, 0);
    return 0;
}