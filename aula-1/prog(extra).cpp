#include<stdio.h>
main(){
	
	float conta;
	float valorRecebido;
	

	
	printf("Total da conta e: ");
	scanf("%f", &conta);
	
	printf("\nDigite o valor recebido: ");
	scanf("%f", &valorRecebido);
	
		float troco = valorRecebido - conta;
	
	printf("\nO valor do troco e: %.2f", troco);
	
}
