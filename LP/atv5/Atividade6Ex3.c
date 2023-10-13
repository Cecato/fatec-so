#include <stdio.h>

int main(){

    int x, y, *a, *b;

    printf("Digite 2 valores [int]\n");
    scanf("%d %d", &x, &y);

    a = &x;
    b = &y;

    printf("------\n");

    if( a > b){
        printf("Valor: %d\n",*a);
    }
    else{
        printf("Valor: %d\n",*b);
    }

    printf("PosA: %p\nPosB: %p", a, b);

    return 0;
}
