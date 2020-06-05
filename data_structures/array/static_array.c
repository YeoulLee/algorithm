#include <stdio.h>

#define MAX_NODE 100000

typedef struct {
    int v;
} Node;
Node node_pool[MAX_NODE];
int last_alloc = 0;

Node* myalloc(void){
    return &node_pool[last_alloc++];
}

int main(void)
{
    Node* node = NULL;
    int na = 0;
    
    scanf("%d", &na);
    
    for(int i = 0; i < na; i++){
        node = myalloc();
        node->v = i;
    }
    
    for(int i = 0; i < na; i++){
        printf("node_pool[%d] = %d\n", i, node_pool[i].v);
    }
    
    return 0;
}
