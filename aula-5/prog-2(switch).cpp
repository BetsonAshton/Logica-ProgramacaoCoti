#include<stdio.h>
#include<stdlib.h>

main(){
	int valor = 200;
	
	switch(valor){
		
		case 1:
			printf("Valor igual a 1");
			break;
			
		case 2:
		printf("Valor igual a 2");
		break;
		
		case 3: 
		printf("Valor igual a 3");
		break;
			
		//Default equivale ao else. s� ser� executado caso as condi�oes n�o forem aceitas
		default:
			printf("Numero invalido");
			break;
	}
}
