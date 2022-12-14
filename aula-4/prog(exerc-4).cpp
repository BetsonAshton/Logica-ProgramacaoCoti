/*
programa que receba um numero, verifique se ele está entre 0 e 100
verifica se ele é par ou impar
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int numero, resto;
	
	printf("Insira o numero: ");
	scanf("%d", &numero);
	
	if(numero >= 0 && numero <= 100 ){
		
		resto = numero %2;
		
		if(resto == 0){
			printf("%d e um numero par", numero);
			
		}else{
			printf("%d e um numero impar", numero);
		}
	
			
		}else{
			printf("Numero invalido");
		}
	
}
