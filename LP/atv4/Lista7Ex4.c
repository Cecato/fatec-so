#include <stdio.h>
#define TAM 3

int ordernar (int *x[]);

int main(){

    int *v[TAM], i, vet[TAM];

    for(i = 0; i < TAM; i++){

        scanf("%d",&vet[i]);
        v[i] = &vet[i];

    }

    ordernar(v);

    for(i = 0; i < TAM; i++){
        printf("%d; ", *v[i]);
    }

    return 0;
}

int ordernar (int *x[]){

    int i, j, aux;

    if( *x[0] == *x[1] && *x[2] == *x[0]){

        return 1;
    }
    else{
        for(i = 1; i < TAM ; i++){

            for( j = 0; j < TAM - 1; j++){

                if( *x[j] > *x[j + 1]){

                    aux = *x[j];
                    *x[j] = *x[j+1];
                    *x[j+1] = aux;
                }

            }
        }

        return 0;

    }


}




