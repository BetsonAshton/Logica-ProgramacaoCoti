#include<stdio.h>
#include<stdlib.h>

int numeros[3];

void entrada(){
	printf("Digite um numero: ");
	scanf("%d", &numeros[0]);
	
	printf("Digite um numero: ");
	scanf("%d", &numeros[1]);
	
	printf("Digite um numero: ");
	scanf("%d", &numeros[2]);
}

void saida (){
	printf("\nPrimeira posicao: %d", numeros[0]);
	printf("\nSegunda posicao: %d", numeros[1]);
	printf("\nTerceira posicao: %d", numeros[2]);
}

main(){
	entrada();
	saida();
	
	system("pause");
}
