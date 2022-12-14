#include<stdio.h>
#include<stdlib.h>

main(){
	
	int num, cont , totalPares, totalImpares;
	
	cont= 1;
	totalPares = 0;
	totalImpares = 0;
	
	while(cont <= 7){
		printf("Digite os numeros: ");
		scanf("%d", &num);
		
		
		 if(num%2 == 0){
		 		totalPares= totalPares + 1;
		 
		 }else{
		 	totalImpares = totalImpares + 1;
		 	
		 }
		 
		 cont++;

	}
		printf("\nA qantidade de numeros par e: %d ", totalPares);
		printf("\nA quantidade de numeros impar e: %d",totalImpares );
	
}

