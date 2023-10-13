#include <stdio.h>
#define TAM 10

int main(){

    int i, v[TAM] = {0,1,2,3,4,5,6,7,8,9};
    int *p;

    p = &v[0];

    for(i = 0; i < TAM; i++){

        *p = *p + 1;
        p++;

    }

    p = &v[0];

    for(i = 0; i < TAM; i++){
        printf("%d\n", *p++);
    }
    return 0;
}
