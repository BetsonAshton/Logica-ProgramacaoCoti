#include<stdio.h>
#include<stdlib.h>

main(){
	int cont = 1;
	
	while(cont <= 10){
		printf("\nNumero: %d", cont);
		cont = cont + 1;
	}
	
	printf("\nObrigado por usar o sistema!");
	system("pause");
}
