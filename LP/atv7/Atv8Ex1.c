#include <stdio.h>
#define TAM 3

int main(){

    int m[TAM] [TAM], i, j, *p;

    for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            printf("Insira o valor para Matriz1[%d][%d] = ", i, j);
            scanf("%d",&m[i][j]);

        }

    }

    printf("\nMatriz 1\n\n");

    p = m;

    for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            printf("%d ",*(p+j+(i+i*2)));

        }
        printf("\n");

    }

}
