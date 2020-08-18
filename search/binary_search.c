#include <stdio.h>
#include <stdlib.h>

// Given an sorted array, search a key in Array using Binary Search

int iterative_binary_search(const int array[], int na, int key)
{
    int start = 0;
    int end = na - 1;
    int middle;
    
    while(start <= end){
        middle = (start + end)/2;
        if(array[middle] ==  key){
            return middle;
        }
        else if(array[middle] < key){
            start = middle + 1;
        }
        else{
            end = middle - 1;
        }
    }
    return -1;
}

int recursive_binary_search(const int array[], int start, int end, int key)
{
    if(start > end){
        return -1;
    }
    
    int middle = (start + end)/2;
    
    if(array[middle] == key){
        return middle;
    }
    else if(array[middle] < key){
        return recursive_binary_search(array, middle+1, end, key);
    }
    else{
        return recursive_binary_search(array, start, middle-1, key);
    }
}

int main(void)
{
    int *a = NULL;
    int na = 0;
    int key = 0;
    int index = 0;
    
    printf("Number of elements: ");
    scanf("%d", &na);
    a = calloc(na, sizeof(int));
    for(int i = 0; i < na; i++){
        a[i] = i*2;
        printf("a[%d]: %d\n", i, a[i]);
    }
    
    printf("Key to search: ");
    scanf("%d", &key);
    
    index = iterative_binary_search(a, na, key);
    //index = recursive_binary_search(a, 0, na-1, key);
    if (index == -1){
        printf("Key NOT found\n");
    }
    else{
        printf("Key found at index %d\n", index);
    }
    
    free(a);
        
    return 0;
}
