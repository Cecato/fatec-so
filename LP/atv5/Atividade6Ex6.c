#include <stdio.h>

void pos(int *a, int *b);

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    pos(&a,&b);

    return 0;
}

void pos(int *a, int *b){

    *a = *a*2;
    *b = *b*2;

    printf("Soma do dobro de A: %d\n"
           "Soma do dobro de B: %d\n"
           "Soma do dobro de A com o dobro de B: %d\n\n", *a*2, *b*2, *a+*b);

    printf("PS: N entendi direito o enuncido :(");
}


