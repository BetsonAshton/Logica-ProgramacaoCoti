/*
faça um programa que leia a base e a altura de um triangulo
a saída deve ser o valor da área
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	float b, h, area;
	
	printf("A base e: ");
	scanf("%f", &b);
	printf("A altura e: ");
	scanf("%f", &h);
	
	area = (b * h)/ 2;
	
	printf("A area e: %.1f", area);
	printf("\n----------------\n");
	
	system("pause");
}
