/*
1)Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos

e passe esse vetor para uma função que vai ler os elementos desse vetor. Depois, no
programa principal, o vetor preenchido deve ser impresso. Além disso, antes de
finalizar o programa, deve-se liberar a área de memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

void ler ( double *v, int n);

int main(){

    int n, i;
    double *ptr;

    printf(" Digite o tamanho do vetor[int]: ");
    scanf("%d", &n);
    printf("\n");

    ptr = (double *) malloc(n * sizeof(int));

    if( ptr == NULL){
        printf("Compra mais RAM\n");
        exit (-1);
    }

    ler( ptr, n);

    for( printf("\n"), i = 0; i < n; i++)
        printf(" Pos[%i] Valor[%.lf] \n", i+1, ptr[i]);

    ptr = NULL;
    free(ptr);

    return 0;
}

void ler ( double *v, int n){

    int i;

    for( printf(" Digite um valor[real||int]\n"), i = 0; i < n; i++){

        printf(" na pos[%i]: ",i+1);
        scanf("%lf",&v[i]);

    }

}
