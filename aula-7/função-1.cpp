#include<stdio.h>
#include<stdlib.h>

float n1, n2, soma, media;

void entrada(){
	printf("Digite um numero: ");
	scanf("%f", &n1);
	
    printf("Digite outro  numero: ");
	scanf("%f", &n2);
}

void calcularSoma(){
	soma = n1 +n2;
}

void calcularMedia(){
	media = soma/2;
}

void saida(){
	printf("\nO valor da soma: %.2f",soma);
	printf("\nO valor da media: %.2f",media);
}

main(){
	entrada();
	calcularSoma();
	calcularMedia();
	saida();
}
