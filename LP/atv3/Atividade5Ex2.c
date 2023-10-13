#include<stdio.h>
#define TAM 10

int SomaVetor(int soma, int count);

int main(){

    SomaVetor(0,0);
    return 0;
}

int SomaVetor(int soma, int count){
    int x[TAM];

    printf("Digite o elemento do vetor[%i]: ",count+1);
    scanf("%i",&x[count]);

    if (count==TAM-1)
    {
        soma += x[count];
        printf("\n%i\n",soma);
    }
    else{
        soma += x[count];
        count++;
        return SomaVetor(soma, count);
    }

}
