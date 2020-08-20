# Recursion

## Recursion vs Iteration
https://www.geeksforgeeks.org/difference-between-recursion-and-iteration/

* trade-off between **time complexity** and **size of code**
* Recursion has the **overhead** of repetitive calling

## Backtracking
Recursion + Prunning
```c
void Backtrack(node v) {
    if( promising(v) ) // Prunning
        if( there is a solution at v )
            write the solution
        else
            for( each child u of v )
                Backtrack(u);
}
```

## Code
### Recursion
* factorial [code](https://github.com/YeoulLee/algorithm/blob/master/recursion/factorial.c)
* fibonacci [code](https://github.com/YeoulLee/algorithm/blob/master/recursion/fibonacci.c)
  * fibonacci_recursive: **O(2^N)**
  * fibonacci_memorization (recursive + memorization): **O(N)**
  * fibonacci_iterative
* Towers of Hanoi [code](https://github.com/YeoulLee/algorithm/blob/master/recursion/hanoi.c)

### Backtracking
* 8-Queen problem [code](https://github.com/YeoulLee/algorithm/blob/master/recursion/eight_queen.c)
