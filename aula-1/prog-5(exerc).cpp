/* 
Faça um programa que leia o valor unitário de um produto e quantidade.
A saída deverá ser o valor total em estoque
*/

#include<stdio.h>

main(){
	float valor1;
	float qtd1;
	float valor2;
	float qtd2;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	
	printf("Digite a quantidade: ");
	scanf("%f", &qtd1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	printf("Digite a quantidade: ");
	scanf("%f", &qtd2);
	
	float vTotal1 = valor1 * qtd1;
	float vTotal2 = valor2 * qtd2;
	
	printf("O valor total no estoque do produto 1: %.1f", vTotal1);
	printf("O valor total do produto 2: %.1f", vTotal2);
	
	
}
