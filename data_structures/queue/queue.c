#include <stdio.h>
#define MAX_CAPACITY 10

int Queue[MAX_CAPACITY];
int front = 0;
int rear = 0;

void initialize(){
    front = -1;
    rear = -1;
}

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

void print(){
    for(int i=front+1; i<=rear; i++){
        printf("%d ",Queue[i]);
    }
    printf("\n");
}

int main(void)
{
    initialize();
    
    while(1){
        int menu;
        int x;
        printf("(1)initialize (2)enqueue (3)dequeue (4)print (0)terminate :");
        scanf("%d", &menu);
        
        if(menu == 0){
            break;
        }
        
        switch(menu){
            case 1 :
                initialize();
                break;
            case 2 :
                printf("data: ");
                scanf("%d", &x);
                if(enqueue(x) == -1){
                    printf("Error(stack overflow)\n");
                }
                else{
                    printf("Enqueued item: %d\n", x);
                }
                break;
            case 3 :
                if(dequeue(&x) == -1){
                    printf("Error(stack underflow)\n");
                }
                else{
                    printf("Dequeued item: %d\n", x);
                }
                break;
            case 4 :
                print();
                break;
        }
    }
        
    return 0;
}
