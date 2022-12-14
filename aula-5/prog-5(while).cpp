/*
programa tabuada multiplicaçao

o programa ira ler um numero e exibir a tabuada ate 10
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int numero, cont, tabuada;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	cont = 0;
	
	while(cont <= 10){
		
		tabuada = numero *cont;
		printf("\n %d x %d -> %d",numero, cont, tabuada);
		cont ++;
	}
}
