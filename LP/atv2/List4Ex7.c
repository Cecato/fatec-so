/*
7. Escreva um algoritmo em linguagem C que:
   a) leia um vetor A de 12 números reais;
   b) construa e imprima um vetor B formado da seguinte maneira:

      - os elementos de índice par são os correspondentes de A divididos por 2;
      - os elementos de índice ímpar são os correspondentes de A multiplicados por 3.
*/

#include <stdio.h>
#define TAM 12

int main(){

    double vetA[TAM],vetB[TAM],aux;
    int i;

    for( i=0 ; i<TAM ; i++){

        printf("Pos N[%i] Digite um valor: ",i+1);
        scanf("%lf",&vetA[i]);

        if(i%2==0){
            vetB[i]=vetA[i]/2;
        }
        else
        {
            vetB[i]=vetA[i]*3;
        }
    }

    for ( i=0 ; i<TAM ; i++)
    {
        printf("\nPos N[%i] Valor: %lf ",i,vetB[i]);
    }

    return 0;
}
