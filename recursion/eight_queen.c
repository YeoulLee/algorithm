#include <stdio.h>

int flag_r[8]; // check row
int flag_ud[15]; // check upper diagonal
int flag_ld[15]; // check lower diagonal
int pos[8];

void print(void){
    for(int i = 0; i < 8; i++){
        printf("%2d", pos[i]);
    }
    printf("\n");
}

void set(int i){
    for(int j = 0; j < 8; j++){
        if(!flag_r[j] && !flag_ud[i+j] && !flag_ld[i+(7-j)]){
            pos[i] = j;
            if(i == 7){
                print();
            }
            else{
                flag_r[j] = flag_ud[i+j] = flag_ld[i+(7-j)] = 1;
                set(i+1);
                flag_r[j] = flag_ud[i+j] = flag_ld[i+(7-j)] = 0;
            }
        }
    }
}

int main(void)
{
    set(0);
    
    return 0;
}
