/*
faça um programa que leia um numero e imprima seu antecessor e seu sucessor
*/


#include<stdio.h>
#include<stdlib.h>

main(){
	
	int valor;
	printf("digite o numero: ");
	scanf("%d", &valor);
	
	int antecessor = valor - 1;
	int sucessor = valor + 1;
	
	printf("Seu antecessor sera: %d", antecessor);
	printf("\n------------------\n");
	printf("Seu sucessor sera: %d", sucessor);
	printf("\n--------------------\n");
	
	system("pause");
	
}
