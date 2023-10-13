/*
4. Receber 15 números e armazená-los em um vetor.
   Ao final, exibir o dobro de cada um dos números.
*/
#include <stdio.h>
#define TAM 15

int main(){

    int vet[TAM], i;

	for(i=0; i < TAM; i++){
		printf("Pos N[%i] Digite um valor: ",i+1);
		scanf("%i", &vet[i]);
	}

	for(i=0; i < TAM; i++){
		printf("\nPosicao[%i] Valor = %i",i+1,vet[i]*2);
	}


	return 0;
}
