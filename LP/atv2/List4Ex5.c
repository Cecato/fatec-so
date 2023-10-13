/*
5. Receber 12 números e armazená-los em um vetor.
 Ao final, exibir quais foram os números positivos informados.
*/

#include <stdio.h>
#define TAM 12

int main(){

    int vet[TAM], i;


    for(i=0; i< TAM; i++ ){
        printf("Pos N[%i] Digite um valor: ",i+1);
        scanf("%i",&vet[i]);
    }

    // Contando 0 como positivo.
    for(i=0; i< TAM;i++){

        if(vet[i] >= 0){
            printf("\nPos N[%i] Valor(Positivo): %i",i+1,vet[i]);
        }

    }

}
