#include "stdio.h"
#include "string.h"
void main (){

    char string[100];
    int i,tamanho_string;
    printf("Informe a STRING desejada: ");
    scanf("%s",&string);
    tamanho_string = strlen(string);
    for(i = tamanho_string; i >= 0; i--){
        printf("%c",string[i]);

    }
    printf("\n");
}
