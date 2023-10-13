#include <stdio.h>

int somaRecursiva(int n, int count, int soma);

int main(){
    int n;

    printf("Escolha um valor: ");
    scanf("%i",&n);

    somaRecursiva(n,1,0);

    return 0;
}

int somaRecursiva(int n, int count, int soma){

    if(count<n){

        soma += count;
        count++;
        return somaRecursiva(n, count, soma);

    }
    else{
        soma += n;
        printf("Valor da soma: %i",soma);
        return 0;
    }

}
