/*
Faça um programa que leia a idade de uma pessoa e o sexo(M/F),
em caso de F o alistamento não é obgrigatório,em caso do sexo M,
 solicitar  a idade e se ela é maior ou igual a 18 anos e informar se o alistamento e obrigatorio ou não
 
 em caso de sexo diferente de M/F, informar sexo inválido 
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	char sexo;
	int idade;
	
	printf("Informe o sexo: ");
	scanf("%c", &sexo);
	
		
	if(sexo == 'm'){
		
		printf("Informe a idade: ");
		scanf("%d", &idade);
		
		if(idade >=18){
			printf("Alistamento obrigatorio!");
		}else if(idade < 18){
			printf("Nao e obrigatorio ainda!");
		}
		
		
	}else if(sexo == 'f'){
		printf("Nao precisa se alistar!");		
	}
	
	else{
	      printf("sexo invalido");
	}
}
		

	

