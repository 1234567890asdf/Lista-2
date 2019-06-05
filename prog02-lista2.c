#include <stdio.h>
#include <stdlib.h>

int main() {
	int dia, mes, ano, total_dias; //datas de nasc
	int dia_a,mes_a,ano_a; //datas atuais
	
	printf("DIA Nasc: ");
	scanf("%d" , &dia);
	printf("\n");
	printf("MES Nasc: ");
	scanf("%d" , &mes);
	printf("\n");
	printf("ANO Nasc: ");
	scanf("%d" , &ano);
	printf("\n");
	printf("DIA Atual: ");
	scanf("%d" , &dia_a);
	printf("\n");
	printf("MES Atual: ");
	scanf("%d" , &mes_a);
	printf("\n");
	printf("ANO Atual: \n");
	scanf("%d" , &ano_a);
	printf("\n");
	
	int qtd_anoB;
	int dias_meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};	

    int qtd_dias_mes, resto_dias_ano;
    qtd_dias_mes=0;
    resto_dias_ano=0;
    int aux;

    qtd_anoB = (ano_a - ano) / 4;
	ano = (ano_a - ano)  * 365;

    // qtd_dias_mes vai somar a qtd de dias de cada mes. 
    for(aux = mes; aux <=12 ;aux++){
        qtd_dias_mes = qtd_dias_mes + (dias_meses[aux-1]);
        
    }
    // resto_dias_ano serve pra somar a qtd de dias que ainda restam pra terminar o ano atual 
    
    for(aux = mes_a;aux <=12 ;aux++){
        resto_dias_ano = resto_dias_ano + (dias_meses[aux-1]);
    }  

    dia = dias_meses[mes-1] - dia;
    dia_a = dias_meses[mes_a-1] - dia_a;
    total_dias = (dia + qtd_dias_mes + ano) - (dia_a + resto_dias_ano) ;
   
    printf("%d/%d/%d.\n" , dia, qtd_dias_mes, ano);
	printf("Total de dias vivido: %d.\n" ,total_dias + qtd_anoB);
        return 0;
}



