#include<stdio.h>
#define TAM 100

int invertVet(int auxI, int auxF, int x[]);

int main(){
    int x[TAM], i;

    for(i = 0; i<TAM; i++){
        x[i]=i;
    }

    invertVet(TAM-TAM,TAM-1,x);

    for(i=0; i<TAM; i++){
        printf("%i, ",x[i]);
    }

    return 0;
}

int invertVet(int auxI, int auxF, int x[]){

    int aux;

    if (auxI<auxF)
    {
        aux = x[auxF];
        x[auxF] = x[auxI];
        x[auxI] = aux;

        auxI++;
        auxF--;

        invertVet(auxI,auxF,x);
    }
    else{
        return 0;
    }


}
