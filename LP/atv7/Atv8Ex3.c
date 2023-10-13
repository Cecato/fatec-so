#include <stdio.h>
#define TAM 4

int main(){

    int m[TAM] [TAM], M[TAM] [TAM], i, j, *p, *P;

    for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            printf("Insira o valor para Matriz1[%d][%d] = ", i, j);
            scanf("%d",&m[i][j]);

        }

    }
   for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            printf("Insira o valor para Matriz2[%d][%d] = ", i, j);
            scanf("%d",&M[i][j]);

        }

    }

    printf("\nMatriz Soma\n\n");

    p = m;
    P = M;

    for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            printf("%d ",*(p+i+j+(i+i*2))+*(P+i+j+(i+i*2)));

        }
        printf("\n");

    }


}


