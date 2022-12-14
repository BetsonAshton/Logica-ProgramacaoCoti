/*
program que receba uma letra e verifica se ela é uma vogal ou consoante

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	char letra;
	
	printf("Informe uma letra: ");
	scanf("%c", &letra);
	
	if(letra == 'a' || letra=='e' || letra == '0' || letra =='u'){
		
		printf("Letra %c e uma vogal", letra);
		
	}else{
		printf("Letra %c e uma consoante", letra);
		
	}
	
	printf("\n----------------------------\n");
	
	system("pause");
}
