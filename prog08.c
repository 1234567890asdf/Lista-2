#include <stdio.h>
int cont=29;
int * converte_bin (int num){
int b[30], rest;

while (num !=1){
    rest=num%2;
    num /= 2;
    b[cont] = rest;
    cont --;
}
b[cont] = 1;
for(int c=cont;c<30;c++){
        printf("%i",b[c]);
    }
return 0;
}
void main (){

    converte_bin(64);
    //for(int c=cont;c<30;c++){
      //  printf("%i",bin[c]);
    //}

}
