/*
programa que receba o preço de dois produtos e calcule o total,
caso o total seja maior que 1000, aplicar desconto de 100 reais
exibir o total com desconto

*/
#include<stdio.h>
#include<stdlib.h>

main(){
	
	int p1, p2, sum, desc;
	
	printf("Insira o valor do produto 1: ");
	scanf("%d", &p1);
	

	
	printf("Insira o valor do produto 2:");
	scanf("%d", &p2);
	

	
	sum = p1 + p2;

	
	if(sum >= 1000){
		desc = sum - 100;
		printf("Desconto aplicado, ficara custando %d!",desc);
	}else{
		printf(" o valor e: %d", sum);
	}
	
		
	
	
	printf("\n---------------------------\n");
	
	system("pause");
}
