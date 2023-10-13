/*
6. Faça um programa que leia o tamanho de um vetor A e,
   em seguida, leia os n elementos do vetor. Considere que o valor
   máximo de elementos que o vetor A pode armazenar é 100. Por fim,
   calcule e mostre a média dos elementos de índice par e o produto
   dos elementos de índice ímpar.
*/

#include <stdio.h>

int main(){

    int i, TAM, qtdPar=0;
    double par=0, impar=1;

    printf("Digite o tamanho do vetor(Min 1,Max 100): ");
    scanf("%i",&TAM);

    int vet[TAM];

    for( ; TAM>100 || TAM<1 ; ){
        printf("Tamanho invalido, digite novamente(Min 1, Max 100): ");
        scanf("%i",&TAM);
    }

    for( i=0 ; i<TAM ; i++){
        printf("Pos N[%i] Digite um valor: ",i+1);
        scanf("%i",&vet[i]);

        if(i%2==0){
            par=par+vet[i];
            qtdPar++;
        }
        else
        {
            impar = impar*vet[i];
        }
    }

    par = par/qtdPar;

    printf("\nMedia par: %lf\n",par);

    if(TAM>1){
         printf("Produto impar: %lf\n",impar);
    }
    else{
        printf("Produto impar inexistente\n");
    }

    return 0;
}
