#include <stdio.h>

void loteria(void);

main(){

   loteria();
}

void loteria(void){
	void interna(int a, int b, int c, int d, int e, int f, int cont, int conttotal){
		if(f > 60){
            f = e + 1;
            e++;
            if(e > 59){
                e = d + 1;
                d++;
                if(d > 58){
                    d = c + 1;
                    c++;
                    if(c > 57){
                        c = b + 1;
                        b++;
                        if(b > 56){
                            b = a + 1;
                            a++;
                            if(a == 56);
                        }
                    }
                }
            }
        }
        if(a < b && b < c && c < d && d < e && e < f){
            cont++;
        }
        conttotal++;
		interna(a, b, c, d, e, f + 1, cont, conttotal);
	}
	interna(1, 2, 3, 4, 5, 6, 1, 1);
}
