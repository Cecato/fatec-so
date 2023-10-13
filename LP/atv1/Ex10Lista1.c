#include <stdio.h>

float mediaProva(float prova1, float prova2, float prova3);
float mediaMaior(float prova1, float prova2, float prova3);
void notasDaPonta(float prova1, float prova2, float prova3);

void main (){
    float prova1, prova2, prova3;

    printf("Digite a nota das provas\n");
    scanf("%f %f %f", &prova1, &prova2, &prova3);

    printf("Media das provas: %.2f\n",mediaProva(prova1,prova2,prova3));
    printf("Media das melhores provas: %.2f\n",mediaMaior(prova1,prova2,prova3));
    notasDaPonta(prova1,prova2,prova3);
}

float mediaProva(float prova1, float prova2, float prova3){

    return (prova1+prova2+prova3)/3;

}

float mediaMaior(float prova1, float prova2, float prova3){

        if (prova1>=prova2 && prova1 >=prova3){
            if(prova2>=prova3){
                return (prova2+prova1)/2;
            }
            else{
                return (prova3+prova1)/2;
            }
        }
        else if(prova2>=prova1 && prova2 >=prova3){
            if(prova1>=prova3){
                return (prova2+prova1)/2;
            }
            else{
                return (prova3+prova2)/2;
            }
        }
        else if(prova1>prova2){
            return(prova3+prova1)/2;
        }
        else
            return (prova3+prova2)/2;
}

void notasDaPonta(float prova1, float prova2, float prova3){

    if (prova1>=prova2 && prova1 >=prova3){
            if(prova2>=prova3){
                printf("Maior nota: %.2f Menor nota: %.2f\n",prova1 ,prova3);
            }
            else{
                printf("Maior nota: %.2f Menor nota: %.2f\n",prova1 ,prova2);
            }
        }
        else if(prova2>=prova1 && prova2 >=prova3){
            if(prova1>=prova3){
                printf("Maior nota: %.2f Menor nota: %.2f\n",prova2 ,prova3);
            }
            else{
                printf("Maior nota: %.2f Menor nota: %.2f\n",prova2 ,prova1);
            }
        }
        else if(prova1>prova2){
            printf("Maior nota: %.2f Menor nota: %.2f\n",prova1 ,prova2);
        }
        else
            printf("Maior nota: %.2f Menor nota: %.2f\n",prova3 ,prova1);

}
