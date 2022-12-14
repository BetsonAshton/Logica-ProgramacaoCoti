#include<stdio.h>
#include<stdlib.h>

main(){
	
	int seuAno,calc;
	
	printf("digite seu ano: ");
	scanf("%d",&seuAno);
	
	calc = 2022 - seuAno;

if(calc >= 16){
	printf("Pode votar ");
	
} 
if( calc >= 16 && calc < 18){
	printf("Votacao opcional");
}
 if(calc >= 18){
	printf("Votacao obrigatoria");
	
}
if(calc < 16){
	printf("Nao pode votar");
}		
	printf("\n---------------\n");
	
	system("pause");
}
