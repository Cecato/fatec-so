#include <stdio.h>

int mdcRecurc(int x, int y);

int main(){

    return mdcRecurc(60, 120);

}

int mdcRecurc(int x, int y) {

    if (x < y) {

        return mdcRecurc(y, x);
    }

    else if (x % y != 0){

        return mdcRecurc(y, x%y);
    }

    else{
        return y;
    }



}
