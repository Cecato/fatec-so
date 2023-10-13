#include <stdio.h>

int contadorRecursivo(int n, int count);

int main(){
    int n;

    printf("Escolha um valor: ");
    scanf("%i",&n);
    printf("\n");

    contadorRecursivo(n,0);

    return 0;
}

int contadorRecursivo(int n, int count){

    if(count<n){

        printf(" %i,",count);
        count++;
        return contadorRecursivo(n, count);

    }
    else{
        printf(" %i\n",n);
        return 0;
    }

}

