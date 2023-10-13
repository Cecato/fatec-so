/*
9.  Leia 10 números inteiros e armazene em um vetor A.
    Crie dois novos vetores A1 e A2.
    Copie os valores ímpares de A para A1, e os valores pares de A para A2.
    Note que cada um dos vetores A1 e A2 tem no
    máximo 10 elementos, mas nem todos os elementos são utilizados.
    No final escreva os elementos utilizados de A1 e A2.
*/
#include <stdio.h>
#define TAM 10

int main(){

    int vetA[TAM], vetA1[TAM], vetA2[TAM];


    for (int i=0; i < TAM; i++) {

        printf("Pos N[%i] Digite um valor: ",i+1);
        scanf("%i",&vetA[i]);
        if (vetA[i]%2==0)
        {
            vetA2[i]=vetA[i];

        }
        else
        {
           vetA1[i]=vetA[i];
        }

    }
    for (int i = 0; i < TAM; i++)
    {
        switch (vetA[i]%2)
        {
            case 0:
                printf("Par = %i\n",vetA2[i]);
                break;

            case 1:
                printf("Impar = %i\n",vetA1[i]);
                break;
        }



    }

    return 0;

}





