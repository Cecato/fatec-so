#include <stdio.h>
#define TAM 10

int func(int v[TAM], int n);

int main(){

    int v[TAM] = {1,2,3,4,5,6,7,8,9,10}, n = TAM;

    func(v, n);

    return 0;
}

int func(int v[TAM], int n){

    int *V;
    V = &v[0];

    for(int i = 0; i < TAM; i++){

        printf("%d\n", *V++);

    }
}
