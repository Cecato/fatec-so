#include <stdio.h>

int fatorial(int n);
void arranjo(int n);

int main(){

    int n = 3;

    fatorial(3);

    for( int i = 0; i < n ; i++){
            printf("A");
            arranjo(n);
    }


}

int fatorial(int n) {
	if(n < 2) {
		return 1;
	}
	return n * fatorial(n - 1);
}

void arranjo(int n){

    int fat = fatorial(n);
    char A(char a){
        if(a ==  0x41 + n){
            if(fat < 0) exit(0);
            a = 'B';
            fat--;
            printf("\n");
        }
        printf("%c", a);
        A(a + 1);
    }
    A('A');

}
