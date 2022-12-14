#include<stdio.h>
#include<stdlib.h>

int matriz [2][2];

void divisor(){
	printf("----------------------------------\n");
}

void entrada(){
	
	//linhas(i)
  for(int i = 0; i< 2; i++){
  	
  	//linha(j)
  	for(int j = 0; j< 2; j++){
  		printf("Matriz[%d][%d]: ",i,j);
  		scanf("%d", &matriz[i][j]);
  		divisor();
	  }
  }
}

void saida(){
	printf("\n----------------------\n");
	
	for(int i = 0; i< 2; i++){
		
		for(int j =0; j<2;j++){
				printf("Matriz[%d][%d]-> %d: \n",i,j, matriz[i][j]);
				divisor();
		}
	}
}

main(){
	entrada();
	saida();
	system("pause");
}
