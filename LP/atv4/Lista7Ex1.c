#include <stdio.h>

int main(){

    float *v[10], x = 0;
    int i;

    for( i = 0; i < 10; i++){
        v[i] = &x+i;
        x++;
        printf("Mem[%p]\n", v[i]);

    }


    return 0;
}
