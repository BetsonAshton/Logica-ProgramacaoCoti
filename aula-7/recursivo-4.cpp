#include<stdio.h>
#include<stdlib.h>

int numeros[5];

void entrada(){

	for(int i=0; i < 5; i++){
		
	printf("Digite um numero: ");
	scanf("%d", &numeros[i]);
	}

}

void saida (){
	printf("\n---------------------------\n");
	
		for(int i=0; i < 5; i++){
			printf("\nNumero: %d", numeros[i]);
		}
	
}

main(){
	entrada();
	saida();
	
	system("pause");
}
