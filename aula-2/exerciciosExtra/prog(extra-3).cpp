#include<stdio.h>
#include<stdlib.h>

main(){
	
	float sal,perc, calc, novoSal;
	
	printf("Digite o salario:");
	scanf("%f", &sal);
	
	printf("Digite o percentual:");
	scanf("%f", &perc);
	
	calc = sal / perc;
	
	novoSal= sal + calc;
	
	printf("Novo salario e: %.1f ", novoSal);
	
	printf("\n----------------\n");
	
	system("pause");
	
}
