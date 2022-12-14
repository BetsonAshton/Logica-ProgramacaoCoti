/*STRUCT*/
#include<stdio.h>
#include<stdlib.h>

struct Pessoa{
	
	char nome[20];
	int idade;
	char sexo;
};

// Acessando o "grupo" Pessoa e aplicando um "apelido" para p grupo 
struct Pessoa p;

void entrada(){
	printf("Digite o nome: ");
	scanf("%s", &p.nome);
	
	printf("Digite a idade: ");
	scanf("%d", &p.idade);
	
	printf("Digite o sexo: ");
	scanf("%s", &p.sexo);
}

void saida(){
	printf("Pessoa de nome %s, idade %d anos e sexo %s \n", p.nome,p.idade,p.sexo);
}

main(){
	
	entrada();
	saida();
}
