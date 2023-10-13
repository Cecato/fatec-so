#include <stdio.h>

int Multip_Rec(int n1, int n2, int count, int soma);

int main(){
    int n1, n2;

    printf("Valor de n1: ");
    scanf("%i",&n1);

    printf("Valor de n2: ");
    scanf("%i",&n2);

    Multip_Rec(n1,n2,0, 0);

    return 0;
}

int Multip_Rec(int n1, int n2, int count, int soma){

    if(count==n2){
        printf("%i",soma);
    }
    else{

        soma += n1;
        count++;

        return Multip_Rec(n1,n2,count, soma);
    }
}
