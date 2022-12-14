#include<stdio.h>
#include<stdlib.h>

main(){
	
	int n1, n2, opcao, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	printf("Digite um numero: ");
	scanf("%d", &n2);
	
	printf("Menu: \n");
	printf("1 - Adicao \n");
	printf("2 - subtracao \n");
	printf("3 - multiplicacao \n");
	printf("4 - Divisao \n");
	
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	
	
	switch(opcao){
		
		case 1:
			resultado = n1 + n2;
			printf("Adicao -> %d", resultado);
			break; 
		
		case 2:
			resultado = n1 - n2;
			printf("Subtracao -> %d", resultado);
			break;
		
		case 3:
			resultado = n1 * n2;
			printf("Multiplicacao -> %d", resultado);
			break;
			
		case 4: 
		if(n1 == 0 || n2 == 0){
			printf(" Um numero nao pode ser dividido por zero \n");
			break;
		}else{
			resultado = n1 / n2;
			printf("Divisao -> %d", resultado);
			break;	
		}
			
		default:
			printf("Opcao invalida");
			break;
			
	}
}
