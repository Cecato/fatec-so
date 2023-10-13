#include <stdio.h>

int qtdRecursiva(int k, int n, int count);

int main(){
    int k, n;

    printf("Digite K: ");
    scanf("%i",&k);
    printf("Digite N: ");
    scanf("%i",&n);

    qtdRecursiva(k,n,0);
}

int qtdRecursiva(int k, int n, int count){

    if(n == 0){

        printf("Ocorre: %i vezes",count);
    }
    else{

        if(n%10==k){
            count++;
        }
        n = n/10;
        return qtdRecursiva(k,n,count);
    }

}
