 
 
#include<stdio.h>
#include<stdlib.h>

main(){
		float p, h, imc;
	
	printf("Informe o peso: ");
	scanf("%f", &p);
	
	printf("Informe a altura: ");
	scanf("%f", &h);
	
	imc = p /(h*h);
	
	printf("Seu imc e: %.2f ", imc);
	
	printf("\n--------------\n");
	
	if(imc< 18.5){
		printf("Voce esta magro");
	}else if(imc >= 18.5 && imc <= 24.9){
	printf("Voce está normal");
	}else{
		printf("Voce esta obeso");
	}
	
	printf("\n-------------\n");
	
	system("pause"); 
}
