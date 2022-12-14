#include<stdio.h>
#include<stdlib.h>

main(){
	int cont = 1;
	
	while(cont <= 5){
		printf("\nContador do while: %d", cont);
		cont++;
		
	}
	
	printf("\n------------------------------\n\n");
	
	for(int contFor = 1; contFor <= 5; contFor++){
		printf("\nContador do while: %d", contFor);
	}
}
