#include<stdio.h>

int SomaVetor(int x);

int main(){

    int x;

    printf("Digite um numero inteiro: ");
    scanf("%i",&x);

    SomaVetor(x);
    return 0;
}

int SomaVetor(int x){

    if (x==0)
    {
        return 0;
    }
    else{
        printf("%i",x%10);
        x=x/10;
        SomaVetor(x);
    }
    return;
}
