#include <stdio.h>
#include<math.h>

void main(){
int i, j;
    for (i=1 ; i<=9 ;i++) {
		printf("Tabuada de %d\n", i);
    	for (j=1 ;j<=10; j++){
			printf("%dx%d=%d\n", i, j,i*j);
		}
		printf("\n");
		
	}
    
}