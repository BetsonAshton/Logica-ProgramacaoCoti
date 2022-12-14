/*
faça um programa que leia 2 numeros(float) e a saida deve ser a soma dos 2 numeros, a subtração dos 2 numeros a divisão e a multiplicação
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	float n1, n2, soma, subtracao, divisao, multiplicacao;
	
	printf("digite o valor 1: ");
	scanf("%f", &n1);
	
	printf("digite o valor 2: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	divisao = n1 / n2;
	multiplicacao = n1 *n2;
	
	printf("A soma será: %.1f,\ne sua subtracao sera: %.1f, e divisao sera: %.1f, e por fim sua multiplicacao e: %.1f ",soma, subtracao, divisao, multiplicacao);
	
	printf("\n-----------------------------\n");
	
	system("pause");
}
