/*
Fa�a um programa que leia 2 numeros digitadois pelo usu�rio e imprima  a m�dia

 */
 #include<stdio.h>
 
 main(){
 
 
 float n1;
 float n2;
 
 printf("Digite o primeiro valor: ");
 scanf("%f", &n1);
 
 printf("Digite o segundo valor: ");
 scanf("%f", &n2);
 
 
 float media = (n1 + n2 )/ 2;
 
 printf("A media e: %.1f", media);
}
