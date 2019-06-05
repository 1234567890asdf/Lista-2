#include <stdio.h> 
#include <math.h> 

void main() { 

    int valornum = 0, valoresacum = 0, continuar = 1, qtdnum = 0; 

    float media, raiz, varia, desvpad, desvMed=0,restDesvquad, desvtotal=0,desv=0, desv2=0, desv2total=0;; 

    while (continuar) { 
        printf("Informe valores para calcular media: "); 
        scanf("%d", &valornum);
        qtdnum++; 
        valoresacum = valoresacum + valornum; 
        media = valoresacum / qtdnum; 
        printf("Continuar? 1- sim 0- não: ");
        scanf("%d", &continuar); 

        if (continuar==0) { 
            desvMed=valornum-media;
            desvtotal=desvtotal + desvMed;
            desv=desvtotal/qtdnum; 
            desv2=pow(desvMed,2);
            desv2total= desv2total + desv2; 
            varia=desv2total + desv2; 
            varia=desv2total/ (qtdnum-1); 
            desvpad=sqrt (varia); } 

        } 
    printf("Valores acumulados: %d\n", valoresacum); 
    printf("Sua media é: %.2f\n", media); 
    printf("Seu desvio padrao é: %.2f", desvpad); 

         

    } 

 

 

 

 

