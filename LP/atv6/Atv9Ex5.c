/*
5)  Crie um programa para manipular vetores. Implemente uma fun��o que receba um vetor de inteiros V e retorne um outro vetor de inteiros alocado dinamicamente com todos os valores de V que estejam entre o valor m�nimo e m�ximo (que tamb�m s�o passados como par�metro para a fun��o).

A fun��o deve obedecer ao seguinte prot�tipo:

int* valores_entre(int *v, int n, int min, int max, int *qtd);

A fun��o recebe:
- v: vetor de n�meros inteiros;
- n: a quantidade de elementos do vetor v;
- min: valor m�nimo a ser buscado;
- max: valor m�ximo a ser buscado;

A fun��o deve:
- Verificar a quantidade de elementos do vetor que sejam maiores do que min e menores que max;
- Caso a quantidade seja maior do que 0 (zero), alocar dinamicamente uma �rea do exato tamanho necess�rio para armazenar os valores;
- Copia os elementos do vetor que sejam maiores do que min e menores que max para a �rea alocada dinamicamente.

A fun��o retorna:
- O endere�o da �rea alocada dinamicamente, preenchida com os n�meros maiores do que min e menores que max, ou NULL, caso essa rela��o de n�meros n�o tenha sido criada;
- A quantidade de n�meros carregados na �rea alocada dinamicamente, atrav�s do par�metro qtd.

 Em seguida, crie a fun��o principal do programa para inicializar um vetor de inteiros, exibir
esses valores na tela e pedir para o usu�rio digitar o valor m�nimo e m�ximo a ser buscado.
Em seguida o programa dever� chamar a fun��o valores_entre e exibir na tela os valores resultantes. Lembre-se de exibir uma mensagem de erro caso nenhum valor seja  encontrado. N�o se esque�a de liberar a mem�ria alocada dinamicamente.
*/
#include <stdio.h>
#include <stdlib.h>

int* valores_entre(int *v, int n, int min, int max, int *qtd);

int main(){

    int i, n, min, max, qtd = 0;

    printf("Digite o tamanho do vetor V: ");
    scanf("%d",&n);
    printf("\n-------------------------------\n\n");

    int v[n];

    for( i = 0; i < n ; i++ ){

        printf("Digite o valor do vetor na pos[%d]: ",i+1);
        scanf("%d",&v[i]);

    }
    printf("\n-------------------------------\n\n");

    printf("Digite o valor minimo: ");
    scanf("%d",&min);

    printf("Digite o valor maximo: ");
    scanf("%d",&max);
    printf("\n-------------------------------\n\n");

    int *vetor = valores_entre( v, n, min, max, &qtd);

    for( printf("{ "), i = 0; i < qtd; i++){
        printf("%d",vetor[i]);
        if( i != qtd - 1 ) printf(", ");
    }
    printf(" }\n");

    vetor = NULL;
    free(vetor);


    return 0;
}

int* valores_entre(int *v, int n, int min, int max, int *qtd){

    int i, j, count = 0;

    for( i = 0; i < n; i++)
        if( v[i] > min && v[i] < max ) count++;

    *qtd = count;

    if( count > 0){
        int *vetor = ( int *) malloc( count * sizeof (int) );



        for( i = 0, j = 0; i < n; i++){
            if( v[i] > min && v[i] < max){
                vetor[j] = v[i];
                j++;
            }
        }

        return vetor;

    }
    else
        return NULL;

}
