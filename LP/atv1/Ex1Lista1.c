#include <stdio.h>

void func();

int main(){

    func();
    return 0;
}

void func(){

    int valor;
    scanf( "%i", &valor );

    if( valor < 0 )
        printf( "Negativo" );
    else
        printf( "Positivo" );
}
