#include <stdio.h>

int main(){

    int xx, *x = &xx, yy, *y = &yy;

    if( x > y){
        printf("%p\n", x);
    }
    else{
        printf("%p\n", y);
    }

    return 0;
}
