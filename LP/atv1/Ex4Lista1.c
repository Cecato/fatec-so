#include <stdio.h>

void retMenor(float x, float y);

void main (){
    float x,y;

    printf("Digite dois numeros:\n");
    scanf("%f %f", &x, &y);

    retMenor(x,y);
}

void retMenor(float x, float y){

    if (x>y){
        printf("%.2f",y);
    }else{
        printf("%.2f",x);}

}
