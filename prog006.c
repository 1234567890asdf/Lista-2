# include <stdio.h>

void main (){

int matriz[9][9], i , j;

    for(i = 0 ; i < 8; i ++){
        for(j=0;j<8;j++){
            matriz[0][j] = 1;
            matriz[i][0] = 1;        
        }
    }
    for(i = 0 ; i < 8; i ++){
        for(j = 0;j<8;j++){
            matriz[i+1][j+1] = matriz[i][j+1] + matriz[i+1][j];
            if(j==7){
                matriz[i+1][j+1]=1;
            } 
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }    
}