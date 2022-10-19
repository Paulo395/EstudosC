#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>//blibliotrca para booleam

//int numeros inteiros 
//float numeros com virgula
//char letras
//bool verdadeiro ou falso

int a = 5;
float b;
char c = 'A';// caracterer com aspas simples
bool d = false;

void main(){
printf("O valor de a era %d \n", a); //%d inteiro
printf("O valor de b era: %f \n", b);//%f float
printf("O caractere era: %c \n" , c);//%c char
printf("O nosso bool era: %d \n" , d);//%d bool ja que e um numero
 
printf("\n");

printf("Digite o novo valor de a: ");
scanf("%D",&a);

printf("Digite o novo valor de b: ");
scanf("%f",&b);

printf("Escreva o o novo caractere: ");
scanf(" %c",&c);// espaco antes do % para ler caracteres

printf("Digite o novo valor do bool: ");
scanf("%d",&d);

printf("\n");

printf("O valor de a agora e %d \n", a);
printf("O valor de b e %.1f \n", b);
printf("O novo caractere e: %.5c \n", c);
printf("O nosso  bool e: %d \n", d);

printf("\n");

system("pause");	
}
