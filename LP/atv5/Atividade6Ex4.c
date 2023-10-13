#include <stdio.h>

void pos(int *a, int *b);

int main(){

    int a = 0, b =1;

    printf("A: %d\nB: %d\n----\n", a, b);

    pos(&a,&b);

    return 0;
}

void pos(int *a, int *b){

    int j;

    j = *a;
    *a = *b;
    *b = j;

    printf("A: %d\nB: %d", *a, *b);
}
