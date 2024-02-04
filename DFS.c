#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

bool visited[MAX_VERTICES];

// Adjacency matrix representation of the graph
int graph[MAX_VERTICES][MAX_VERTICES];

int numVertices;

void DFS(int vertex) {
    visited[vertex] = true;
    printf("%d ", vertex);

    for (int i = 0; i < numVertices; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting vertex for DFS: ");
    int startVertex;
    scanf("%d", &startVertex);

    printf("DFS traversal: ");
    DFS(startVertex);
    printf("\n");

    return 0;
}
