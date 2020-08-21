#include <stdio.h>
#define MAX_CAPACITY 10

int Queue[MAX_CAPACITY];
int front = -1;
int rear = -1;
int num = 0; // check if the queue is empty or full
// front = rear when the queue is empty or full

void initialize(){
    front = -1;
    rear = -1;
    num = 0;
}

int enqueue(int x){
    if(num >= MAX_CAPACITY){
        return -1; // overflow
    }
    
    rear = (rear + 1) % MAX_CAPACITY;
    Queue[rear] = x;
    num++;
    return 0;
}

int dequeue(int *x){
    if(num <= 0){
        return -1; // underflow
    }
    
    front = (front + 1) % MAX_CAPACITY;
    *x = Queue[front];
    num--;
    return 0;
}

void print(){
    for(int i = 0; i < num; i++){
        printf("%d ",Queue[(i + (front+1))%MAX_CAPACITY]);
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
