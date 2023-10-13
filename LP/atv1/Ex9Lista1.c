#include <stdio.h>
#include <locale.h>

float celsius(float temp);
float farenheit(float temp);

void main(){

    char escolha;
    float temp;

    printf("Escolha: Celsius (C) ou Farenheit (F) \n");
    scanf("%s", &escolha);

    printf("Digite a temperatura: \n");
    scanf("%f", &temp);

    celsius(temp);

    switch(escolha){

        case 'F':
            printf("%f\n",celsius(temp));
        break;

        case 'C':
             printf("%f\n",farenheit(temp));
        break;

        default:
            printf("Comando invalido");
        break;

    }


}

float celsius(float temp){
    temp = 5*(temp-32)/9;
    return temp;
}

float farenheit(float temp){
    temp = (9*temp/5)+32;
    return temp;
}
