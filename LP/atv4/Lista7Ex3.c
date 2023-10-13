#include <stdio.h>

int main(){

    int *v[5], i, vet[5];

    for(i = 0; i < 5; i++){

        scanf("%d",&vet[i]);
        v[i] = &vet[i];
        if( *v[i] % 2 == 0){
            printf("Pos [%p]\n",v[i]);
        }

    }

    return 0;
}
