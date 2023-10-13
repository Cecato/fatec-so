#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Dado();
int main(void)
{
    Dado();
}

void Dado(){
    char i ="S";
    for(; i !="S" || i!="s" || i !="Sim" || i!="sim"; ){

        printf("Jogar dado? (Digite Sim)\n");
        scanf("%s",&i);
        srand(time(NULL));
        printf("\nDado: %d\n\n", 1 + rand() % 6);
    }

}
