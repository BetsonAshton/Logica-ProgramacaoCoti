#include<stdio.h>
#include<stdlib.h>

main(){
	float valorTotal, valorRecebido, troco;// otimiza�ao,declarar as variaveis do tipo float numa s� linha
	
	printf("Total da conta:");
	scanf("%f", &valorTotal);
	
	printf("Valor recebido: ");
	scanf("%f", &valorRecebido);
	
	troco = valorRecebido - valorTotal;
	printf("Troco: %.2f", troco);
	printf("\n----------------------\n");
	
	system("pause");
}
