#include<stdio.h>
#include<stdlib.h>

int num, soma;

void entradaRecursiva(){
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	soma = soma + num;
	
	if(num != 0){
		entradaRecursiva();
	}else{
		printf("Soma dos valores: %d", soma);
	}

}

	main(){
		entradaRecursiva();
		system("pause");
	}	
