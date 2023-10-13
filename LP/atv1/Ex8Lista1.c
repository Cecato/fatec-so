#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Dado();
int main(void)
{
    Dado();
}

void Dado(){

    int random,quant1= 0,quant2= 0,quant3= 0,quant4= 0,quant5= 0,quant6= 0;

    srand(time(NULL));

    for(int i = 0 ; i < 100*100*100; i++ ){

        random = 1 + rand() % 6;

        if(random == 1){quant1+=1;}
        else if(random == 2){quant2+=1;}
        else if(random == 3){quant3+=1;}
        else if(random == 4){quant4+=1;}
        else if(random == 5){quant5+=1;}
        else{quant6+=1;}
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", quant1, quant2, quant3, quant4, quant5, quant6);

}
