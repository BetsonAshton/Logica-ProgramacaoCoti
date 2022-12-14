/*
IMC - indice de massa corporal

Faça um programa que receba o peso e a altura de uma pessoa

a saida deve ser o IMC


*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	float p, h, imc;
	
	printf("Informe o peso: ");
	scanf("%f", &p);
	
	printf("Informe a altura: ");
	scanf("%f", &h);
	
	imc = p /(h*h);
	
	printf("O IMC sera: %.1f", imc);
	printf("\n--------------\n");
	
	system("pause"); 
}
