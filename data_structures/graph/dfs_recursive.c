#include <stdio.h>
#define MAX_VERTEX 7
#define MAX_EDGE 3

// Graph
int Graph[MAX_VERTEX+1][MAX_EDGE] = {
    {0,0,0},
    {2,3,0}, // vertex 1
    {1,4,5}, // vertex 2
    {1,7,0}, // vertex 3
    {2,6,0}, // vertex 4
    {2,6,0}, // vertex 5
    {4,5,7}, // vertex 6
    {3,6,0}  // vertex 7
};

int visited[MAX_VERTEX+1] = {0};

void recursive_DFS(int v){
    
    visited[v] = 1;
    printf("%d ",v);
    for(int i=0; i<MAX_EDGE; i++){
        int next = Graph[v][i];
        if(next != 0 && !visited[next]){
            recursive_DFS(next);
        }
    }
}

int main(void)
{
    int start_vertex = 1;
    recursive_DFS(start_vertex);
    return 0;
}
