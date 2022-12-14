#include<stdio.h>
#include<stdlib.h>

float calcularSoma(float n1, float n2){
	
	float soma = n1 + n2;
	return soma;
}


void imprimirMsg(){
	printf("\nObrigado por usar o sistema\n");
}


main(){
	
	float somaDaFuncao;
	 
	 
	 somaDaFuncao = calcularSoma(10,8);
	 printf("\nSoma da funcao e %.1f ", somaDaFuncao/2);
	 
	 printf("\nSoma da funcao e: %.1f", calcularSoma(7,9));
	 
	 imprimirMsg();
	 system("pause");
}
