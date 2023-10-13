#include <stdio.h>
#define TAM 10

int func(int v[TAM], int n);

int main(){

    int v[TAM], n = TAM;

    func(v, n);

    for(int i = 0; i < TAM; i++){

        printf("%i\n", v[i]);
    }

    return 0;
}

int func(int v[TAM], int n){

    int *V;

    V = &v[0];

    for(int i = 0; i < TAM; i++){
        *V = n;
        V++;

    }
}

