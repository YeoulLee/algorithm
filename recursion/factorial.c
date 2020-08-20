#include <stdio.h>

int factorial(int n){
    if(n > 0){
        return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}

int main(void)
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    printf("Factorial of %d : %d\n", x, factorial(x));
    
    return 0;
}
