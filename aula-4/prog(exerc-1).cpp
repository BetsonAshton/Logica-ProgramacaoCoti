/*
programa que receba a idade de uma pessoa e verifique se a idade é válida e se pode votar

se a idade for menor que 16 não podeentre 16 e 18 voto facultativo
maior de 18 obrigatório

*/

#include <stdio.h>
#include <stdlib.h>

main(){
	
	int idade;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	if(idade >= 0 && idade <=100){
		//printf("Idade valida!");
	
		if(idade < 16){
		printf("Nao pode votar");
		}
	
		else if(idade >=16 && idade <= 18){
		printf("Voto facultativo");
		}
		else{
			printf("Voto obrigatorio");
		}
	
			
	}else{
		printf("Idade invalida!");
	}
	
}
