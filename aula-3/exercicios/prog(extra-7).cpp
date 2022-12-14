#include<stdio.h>
#include<stdlib.h>

main(){
	
     float preco, qtd, calc, total;
	
	printf("Insira a quantidade: ");
	scanf("%f",&qtd);
	
	printf("Insira o preco: ");
	scanf("%f", &preco);

	total = qtd*preco;
	
	if(qtd > 50){
		calc = total * 20/100;
		total = (total - calc);
		
	}		
		
	
	printf("O total e: %f", total);
}
