#include <stdio.h>
#define MAX_CAPACITY 10

int Stack[MAX_CAPACITY];
int top = -1;

void initialize(){
    top = -1;
}

int push(int x){
    if(top >= MAX_CAPACITY-1){
        return -1; // overflow
    }
    
    top++;
    Stack[top] = x;
    return 0;
}

int pop(int *x){
    if(top <= -1){
        return -1; // underflow
    }
    
    *x = Stack[top];
    top--;
    return 0;
}

void print(){
    for(int i = 0; i <= top; i++){
        printf("%d ", Stack[i]);
    }
    printf("\n");
}

int main(void)
{
    initialize();
    
    while(1){
        int menu;
        int x;
        printf("(1)initialize (2)push (3)pop (4)print (0)terminate :");
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
                if(push(x) == -1){
                    printf("Error(stack overflow)\n");
                }
                else{
                    printf("Pushed item: %d\n", x);
                }
                break;
            case 3 :
                if(pop(&x) == -1){
                    printf("Error(stack underflow)\n");
                }
                else{
                    printf("Poped item: %d\n", x);
                }
                break;
            case 4 :
                print();
                break;
        }
    }
        
    return 0;
}
