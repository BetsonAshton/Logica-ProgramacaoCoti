#include<stdio.h>
#include<stdlib.h>

main(){
	
	float qtd,valor, total;
	
	printf("Insira a quantidade: ");
	scanf("%f", &qtd);
	
	if(qtd > 50){
		valor = 20;
		printf("Custara: %.1f", valor);
	}else{
		valor = 30;
		printf("Custara: %.1f", valor);
	}
	
	total = valor * qtd;
	
	printf("O total do pedido e: %.2f", total);
	
	
	
}
