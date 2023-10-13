#include <stdio.h>
#include <string.h>

int dent(char p[], char s[]);

int main(){

    char pp[] = "Gustavo", ss[] = "Gu";

    if( dent(pp,ss) != 2){
        printf("Nao Contem");
    }
    else{
        printf("Contem");
    }


    return 0;
}

int dent(char p[], char s[]){

    int aux = 0;

    char *pp, *ss;

    pp = &p[0];
    ss = &s[0];

    while(!aux){

        if(*pp == *ss){
            ss++;
        }
        else{
            ss = &s[0];
        }
        if(*ss == 0){
            aux =2;
        }
        if(*pp == 0){
            aux = 1;
        }
        pp++;
    }
    return aux;

}

