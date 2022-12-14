#include<stdio.h>
#include<stdlib.h>

main(){
	int num, tabuada;
	   
	   
	
		printf("Digite o numero: ");
		scanf("%d", &num);
		
		tabuada = 0;
	
	for(int cont = 1;cont <= 10; cont++){
		
	
		
		tabuada = num * cont;
		
		printf("\n%d x %d -> %d", num, cont, tabuada);
		
	}
	
	
}
