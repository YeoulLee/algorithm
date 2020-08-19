#include <stdio.h>
#define MAX_CAPACITY 10
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

int Stack[MAX_CAPACITY];
int top = -1;

int push(int x){
    if(top >= MAX_CAPACITY-1){
        return -1; // overflow
    }
    
    top++;
    Stack[top] = x;
    return 0;
}

int pop(){
    if(top <= -1){
        return -1; // underflow
    }
    
    top--;
    return 0;
}

void iterative_DFS(int v){
    
    visited[v] = 1;
    printf("%d ",v);
    push(v);
    
    while(top > -1){
        int cur = Stack[top];
        int is_found = 0;

        for(int i=0; i<MAX_EDGE; i++){
            if(Graph[cur][i] != 0 && !visited[Graph[cur][i]]){
                int next = Graph[cur][i];
                visited[next] = 1;
                printf("%d ",next);
                push(next);
                is_found = 1;
                break;
            }
        }
        
        if(is_found!=1){
            pop();
        }
    }    
}

int main(void)
{
    int start_vertex = 1;
    iterative_DFS(start_vertex);
    return 0;
}
