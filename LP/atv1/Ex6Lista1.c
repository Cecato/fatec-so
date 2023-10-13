#include <stdio.h>

void retMenor(float x, float y, float z);

void main (){
    float x,y, z;

    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", &x, &y, &z);

    retMenor(x,y,z);
}

void retMenor(float x, float y, float z){

    if (x<y && x<z){
        printf("%.2f",x);

    }
    else if(y<x && y<z){
        printf("%.2f",y);
    }
    else{printf("%.2f",z);}

}
