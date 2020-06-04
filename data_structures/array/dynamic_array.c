#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a = NULL;
    int na = 0;
    
    scanf("%d", &na);
    a = calloc(na, sizeof(int));
    //a = malloc(na * sizeof(int));
    
    if(a == NULL){
        printf("Error");
        exit(0);
    }
    
    for(int i = 0; i < na; i++){
        a[i] = i;
        printf("a[%d] = %d\n", i, a[i]);
    }
    
    free(a);
    
    return 0;
}
