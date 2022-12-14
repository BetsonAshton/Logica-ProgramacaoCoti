#include<stdio.h>
#include<stdlib.h>

void imprimirDivisor(){
	printf("\n----------------------\n");
}

void imprimirNumero(int numero){
	printf("Numero informado e: %d \n", numero);
}

void imprimirSoma(int n1, int n2){
	
	int soma = n1 + n2;
	printf("O resultado da soma e: %d", soma);
}

main(){
	
	imprimirNumero(100);
	
	imprimirDivisor();
	
	imprimirSoma(10,5);
	imprimirDivisor();
	
	system("pause");
}
