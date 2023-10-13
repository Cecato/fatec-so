/*
4)  Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.

Sendo:
x1 = {1, 3, 5, 6, 7}
x2 = {1, 3, 4, 6, 8}
x3 irá conter {1, 3, 6}.

Assinatura da função:
int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd);
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);

int main(){

    int x1[] = {1, 3, 5, 6, 7}, x2[] = {1, 3, 4, 6, 8};
    int i, qtd = 0;

    int *x3 = uniao(x1, x2, TAM, TAM, &qtd);

    for( printf("{ "), i = 0; i < qtd; i++){
        printf("%d",x3[i]);
        if( i != qtd - 1 ) printf(", ");
    }
    printf(" }\n");

    x3 = NULL;
    free(x3);

    return 0;

}




int* uniao(int *x1, int *x2, int n1, int n2, int * qtd){

    int i, j, count = 0;

    for( i = 0; i < n1; i++){
        if(x1[i]==x2[i]) count++;

    }

    *qtd = count;

    int *x3 = ( int *) malloc( count * sizeof (int) );

    for( i = 0, j =0; j < count; i++){

        if( x1[i] == x2[i] ) {
            x3[j] = x1[i];
            j++;
        }


    }

    return x3;
}
