/*
3. Receber 8 n�meros e armazen�-los em um vetor.Ao final, pedir para o usu�rio
   escolher uma posi��o do vetor e exibir o n�mero contido nela.
*/

#include <stdio.h>
#define TAM 8

int main(){

    int vet[TAM], i;
    //Recebe valores e armazena no vetor
    for(i=0; i< TAM; i++ ){
        printf("Pos N[%i] Digite um valor: ",i+1);
        scanf("%i",&vet[i]);
    }

    printf("\nEscolha uma posicao no vetor (do 1 ao 8): ");
    scanf("%i",&i);
    if(i>0 && i<9){
        printf("A posicao %i contem o numero: %i",i,vet[i-1]);
    }
    else{
        printf("ERRO, dado invalido.");
    }

}
