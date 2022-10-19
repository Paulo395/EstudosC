#include <stdio.h>
#include <stdlib.h>

int idade, soma;
int ano = 2020;

void main (){
	printf("Em que ano seus pais transaram!!!! \n");
	printf("Quantos anos voce tem? \n");
	scanf("%d", &idade);
	
soma = idade - ano;

printf("Seus pais te fizeram em %d!!!", soma);
system ("pause");
	
	
}
