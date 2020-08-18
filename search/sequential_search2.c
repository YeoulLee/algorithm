#include <stdio.h>
#include <stdlib.h>

// Given an sorted array, search a key in Array using Sequential Search
int sequential_search2(const int array[], int na, int key)
{
    for(int i = 0; (array[i] <= key) && (i < na); i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
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
    
    index = sequential_search2(a, na, key);
    if (index == -1){
        printf("Key NOT found\n");
    }
    else{
        printf("Key found at index %d\n", index);
    }
    
    free(a);
        
    return 0;
}
