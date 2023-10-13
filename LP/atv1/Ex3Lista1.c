#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);
void raizes(float a, float b, float c);
int main(){

    float a, b, c;

    printf("Digite as raizes em ordem: A, B, C\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 || delta(a,b,c)< 0){
        printf("Erro");
    }else{raizes(a,b,c);}

    return 0;
}

float delta( float a, float b, float c ){

    float rDelta;
    rDelta = b*b-4*a*c;
    return rDelta;
}
void raizes(float a, float b, float c){

    float raiz0,raiz1;

    raiz0 = (-b+sqrt(delta(a,b,c)))/2*a;
    raiz1 = (-b-sqrt(delta(a,b,c)))/2*a;

    printf("A primeira raiz: %.2f\nA segunda raiz: %.2f",raiz0, raiz1);

}
