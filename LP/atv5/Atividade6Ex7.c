#include <stdio.h>

void func(int *a, int *b);

int main(){

    int a = 5, b = 20;

    printf("A: %d\nB: %d\n-------\n", a, b);

    func(&a, &b);

    printf("A: %d\nB: %d\n", a, b);

}

void func(int *a, int *b){

    *a = *a + *b;

}
