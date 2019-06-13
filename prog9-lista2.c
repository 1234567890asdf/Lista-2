#include <stdio.h>
#include <string.h>

void main(){
    char c[100];
    printf("Insira uma string: ");
    fgets(c,100,stdin);
    for(int i=0; i < strlen(c); i++){
    printf("%c", c[i]);
    for(int i = strlen(c) -1; i >= 0; i--){
        printf("%c", c[i]);
        }
    }
}

