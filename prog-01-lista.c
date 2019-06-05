#include <stdio.h> 

 int main() { 
    int n, divisao; 
    printf("Digite um numero: "); 
    scanf("%d", &n);
    divisao=n/2; 

    if (n==divisao*2) { 
        printf("o seu numero é par\n"); 
    } else  { 
        printf("o seu numero é impar\n"); 

    } 

} 
