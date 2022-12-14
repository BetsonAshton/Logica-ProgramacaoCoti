/*
faça um programa que leia 3 numeros e exiba o maior deles

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int n1, n2, n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o primeiro segundo numero: ");
	scanf("%d", &n2);
	
	printf("Digite o primeiro terceiro numero: ");
	scanf("%d", &n3);
	
	if(n1 > n2 && n1> n3){
		printf(" o valor %d e maior", n1);
		
		
	}else if(n2 >n1 && n2> n3){
		printf("o valor %d e maior", n2);
		
	}else{		
		printf("O valor %d e maior", n3);
	}
	
	
}
