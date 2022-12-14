#include<stdio.h>
#include<stdlib.h>
/*
nesse exercicio acrescentou  se(if)  se sao iguais os valores
*/



main(){
	
	int n1, n2;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("Primeiro maior que o segundo");
	}
	
	if(n2 > n1){
		printf("Segundo maior que o primeiro");
	}	
	if(n1 == n2){
		printf("Sao iguais");
	}
	
	printf("\n--------------------\n");
	
	system("pause");
}
