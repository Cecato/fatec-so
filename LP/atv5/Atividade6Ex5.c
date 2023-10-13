#include <stdio.h>

void pos(int *a, int *b);

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    pos(&a,&b);

    return 0;
}

void pos(int *a, int *b){

    if(*a > *b){
         return printf("A: %d\nB: %d", *a, *b);
    }

    int j;

    j = *a;
    *a = *b;
    *b = j;

    printf("A: %d\nB: %d", *a, *b);

}

