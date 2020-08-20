#include <stdio.h>

void hanoi(int n, int from, int by, int to){
    
    if(n > 1){
        hanoi(n-1, from, to, by);
    }
    
    printf("Move Disk %d from %d to %d\n", n, from, to);
    
    if(n > 1){
        hanoi(n-1, by, from, to);
    }
    
}

int main(void)
{
    int x;
    printf("Enter the number of disks: ");
    scanf("%d", &x);
    
    hanoi(x, 1, 2, 3);
    
    return 0;
}
