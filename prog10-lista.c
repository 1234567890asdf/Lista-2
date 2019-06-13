#include <stdio.h>

void somar(int*m, int*n) {
    printf("soma %d + %d = %d \n",*m, *n, *m + *n);
}
void subtrair(int*s, int*r) {
    printf("subtraindo %d - %d = %d \n", *s, *r,*s - *r);
}

void multiplicar(int*e, int*f) {
    printf("multiplicar %d * %d = %d \n", *e, *f, (*f) * (*e));
}

void dividir(int*X, int*Y){
    printf("dividindo %d / %d = d \n", *X,*Y, *X / *Y);
}
void main(){
    int Y,X;
    printf("Informe um valor positivo: ");
    scanf("%d", &X);
    printf("Informe o um valor positivo: ");
    scanf("%d", &Y);
    
    somar(&X, &Y);
    
    subtrair(&X, &Y);
    
    multiplicar(&X, &Y);
    
    dividir(&X, &Y);
}

