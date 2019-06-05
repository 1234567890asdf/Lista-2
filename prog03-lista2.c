#include<stdio.h>
void main(){
float x, y;

printf("informe as coordenadas x e y do plano cartesiano para verificar em qual quadrante está. \n");
printf("Digite o valor de x:\n");
scanf("%f", &x);

printf("Digite o valor de y:\n");
scanf("%f", &y);

if (x > 0 && y > 0){
    printf("Suas coordenadas x:%.2f e y:%.2f estão no quadrante 1\n",x,y);
}
if (x < 0 && y > 0){
    printf("Suas coordenadas x:%.2f e y:%.2f estão no quadrante 2\n",x,y);
}
if (x < 0 && y < 0){
    printf("Suas coordenadas x:%.2f e y:%.2f estão no quadrante 3\n",x,y);
}
if (x > 0 && y < 0){
    printf("Suas coordenadas x:%.2f e y:%.2f estão no quadrante 4\n",x,y);

}
}
