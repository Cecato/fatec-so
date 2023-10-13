#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main(){

    float x = 10, y, z;

    calc_esfera(x, &y, &z);

    printf( "x = %f\n"
            "y = %f\n"
            "z = %f\n", x, y, z);

    return 0;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4* 3.14 * pow(R, 2);
    *volume = (4 * 3.14 * pow(R, 3))/3;
}
