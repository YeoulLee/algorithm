#include <stdio.h>
#define MAX_CAPACITY 100
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

int Queue[MAX_CAPACITY];
int front = -1;
int rear = -1;

int enqueue(int x){
    if(rear >= MAX_CAPACITY-1){
        return -1; // overflow
    }
    
    rear++;
    Queue[rear] = x;
    return 0;
}

int dequeue(int *x){
    if(front == rear){
        return -1; // underflow
    }
    
    front++;
    *x = Queue[front];
    return 0;
}

void BFS(int v){
    
    visited[v] = 1;
    enqueue(v);
    
    while(front != rear){
        int cur;
        dequeue(&cur);
        printf("%d ", cur);
        
        for(int i=0; i<MAX_EDGE; i++){
            if(Graph[cur][i] != 0 && !visited[Graph[cur][i]]){
                int next = Graph[cur][i];
                visited[next] = 1;
                enqueue(next);

            }
        }
    }
}

int main(void)
{
    int start_vertex = 1;
    BFS(start_vertex);
    return 0;
}
