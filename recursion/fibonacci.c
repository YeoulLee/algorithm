#include <stdio.h>
#define MAX_NUM 100

int fibonacci_recursive(int n){
    if(n <= 1){
        return n;
    }
    else{
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
    }
}

// recursive + memorization
int memo[MAX_NUM];
int fibonacci_memorization(int n){
    if(n <= 1){
        return n;
    }
    else{
        if(memo[n] > 0){
            return memo[n];
        }
        memo[n] = fibonacci_memorization(n-1) + fibonacci_memorization(n-2);
        return memo[n];
    }
    
}

int d[MAX_NUM];
int fibonacci_iterative(int n){
    d[0] = 0;
    d[1] = 1;
    for(int i = 2; i <= n; i++){
        d[i] = d[i-1] + d[i-2];
    }
    return d[n];
}

int main(void)
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    printf("Fibonacci Series: ");
    for(int i = 0; i <= x; i++){
        //printf("%d ", fibonacci_recursive(i)); // O(2^N)
        printf("%d ", fibonacci_memorization(i)); // O(N)
        //printf("%d ", fibonacci_iterative(i));
    }
    
    return 0;
}
