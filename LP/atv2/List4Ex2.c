/*
2. Receber 10 n�meros e armazen�-los em um vetor.
   Ao final, exibir os n�meros na ordem inversa da que foram recebidos.
*/

#include <stdio.h>
#define TAM 10

int main(){

    int vet[TAM], i;

	//Recebe valores e armazena no vetor
	for(i=0; i < TAM; i++){
		printf("Digite um valor: ");
		scanf("%i", &vet[i]);
	}

	//Imprimir na ordem inversa da digitada
	for(i=TAM-1; i > -1; i--){
		printf("%i\n", vet[i]);
	}


	return 0;
}
