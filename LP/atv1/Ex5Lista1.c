#include <stdio.h>

void retMaior(float x, float y, float z);

void main (){
    float x,y, z;

    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", &x, &y, &z);

    retMaior(x,y,z);
}

void retMaior(float x, float y, float z){

    if (x>y && x>z){
        printf("%.2f",x);

    }
    else if(y>x && y>z){
        printf("%.2f",y);
    }
    else{printf("%.2f",z);}

}
