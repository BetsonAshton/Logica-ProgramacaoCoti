#include<stdio.h>
#include<stdlib.h>

int n = 0;

// toda recursividade precisa de uma condição
void imprimirRecursivo(){
	n++;
	
	printf("\nRecursivo!");
	
	if(n < 5){
		imprimirRecursivo();
	}
}

main(){
	imprimirRecursivo();
	system("pause");
}
