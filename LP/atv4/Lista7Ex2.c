#include <stdio.h>

int main(){

    int *v[5], i, x;

    for(i = 0; i < 5; i++){

        scanf("%d",&x+i);
        v[i] = &x+i;
        printf("Dobro: [%d]\nPos[%p]\n", *v[i]*2, v[i]);

    }

    return 0;
}
