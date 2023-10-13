/*
2) Fa�a uma fun��o que receba um valor n e crie dinamicamente um vetor de n
elementos e retorne um ponteiro.
Crie uma fun��o que receba um ponteiro para um vetor e um valor n e imprima os n
elementos desse vetor.
Construa tamb�m uma fun��o que receba um ponteiro para um vetor e libere esta �rea de mem�ria.
Ao final, crie uma fun��o principal que leia um valor n e chame a fun��o criada acima. Depois,
a fun��o principal deve ler os n elementos desse vetor. Ent�o, a fun��o principal deve
chamar a fun��o de impress�o dos n elementos do vetor criado e, finalmente, liberar a
mem�ria alocada atrav�s da fun��o criada para libera��o.
*/

#include <Stdio.h>
#include <stdlib.h>

int * vetor( int n );
void imprimir( int *p, int n );
void liberar ( int *p );
void principal();

int main(){

    principal();

    return 0;
}

void principal(){

    int n, *v, i;

    printf("Tamanho do V: ");
    scanf("%d",&n);

    v = vetor(n);
    printf("Digite [%d] valore(s): \n",n);

    for( i = 0; i < n; i++)
        scanf("%d",&v[i]);

    imprimir(v, n);
    liberar(v);

}

int * vetor( int n){

    int *v = ( int *) malloc( n * sizeof (int) );

    if(v == NULL){
        printf("Compra RAM\n");
        exit(-1);
    }

    return v;
}
void imprimir( int *p, int n ){

    int i;

    for( i = 0; i < n; i++)
        printf("Valor: [%d] Pos [%d] \n", p[i], i+1);
}

void liberar( int *p){

    free(p);
}


