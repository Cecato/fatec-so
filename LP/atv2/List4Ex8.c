/*
8. Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena.
O sorteio consiste na extração de 6 números diferentes, no universo de 01 a 60.
A seguir, ler um vetor B de 10 elementos contendo uma aposta.
Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos), a quina (5 acertos) ou a quadra (4 acertos).
*/

#include <stdio.h>
#define Gabarito 6
#define Aposta   10

int main()
{
	int vetA[Gabarito], vetB[Aposta], i, j, acertos=0, numero;


	for(i=0; i < Gabarito; i++)
	{
		printf("Digite o gabarito (1 a 60) da Mega-Sena: ");
		scanf("%i", &vetA[i]);
	}

	for(i=0; i < Aposta; i++)
	{
		printf("Digite a aposta (1 a 60) da Mega-Sena: ");
		scanf("%i", &vetB[i]);
	}

	for(i=0; i < Aposta; i++)
	{
	    numero = vetB[i];

		for(j=0; j < Gabarito; j++)
		{
			if(numero == vetA[j])
			{
				acertos++;
			}
		}
	}

	printf("\nTotal de Acertos: %i", acertos);

	switch(acertos){
		case 6 : 	printf("\nVoce fez a sena");   break;
		case 5 : 	printf("\nVoce fez a quina");  break;
		case 4 : 	printf("\nVoce fez a quadra"); break;
		default:    printf("\nSem premiacao");     break;
	}


	return 0;
}
