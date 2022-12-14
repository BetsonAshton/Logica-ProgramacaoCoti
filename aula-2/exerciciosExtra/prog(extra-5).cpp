#include<stdio.h>
#include<stdlib.h>

main(){
	
	float n1, n2, media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/ 2;
	
	if(media > 6){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
	
	printf("\n--------------\n");
	
	system("pause");
}
