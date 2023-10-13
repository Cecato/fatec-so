#include <stdio.h>

int main(){

    int a = 1, *A;
    double b = 1.5, *B;
    char c = 'A', *C;

    A = &a;
    B = &b;
    C = &c;

    printf("Int: %d\nReal: %.2lf\nString: %c\n------------\n", a, b, c);

    printf("Int: %d --- Pos[%p]\n"
           "Real: %.2lf  --- Pos[%p]\n"
           "String: %c  --- Pos[%p] \n------------\n"
           , *A+1, A, *B+1, B, *C+1, C);


    return 0;
}
