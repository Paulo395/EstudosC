/*
Aula Kella 20/04/2021
Funçoes que vão converter caracteres ou strings/
toupper()/lower().
*/
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#define MAX 15

int main()
{
	char nome[MAX];
	char sobrenome[MAX];
	
	puts("Digite seu nome: ");
	strupr(gets(nome));
	
	puts("Digite seu sobrenome: ");
	strupr(gets(sobrenome));
	
	//nome e sobrenome unidos convertidos para maiusculos
	printf("%s\n",strcat(nome,sobrenome));
	
	//nome e sobrenome unidos convertidos em minusculo
	printf("%s\n",strlwr(nome,sobrenome));
	
	//sobrenome convertido em minusculo
	printf("%s",strlwr(sobrenome));
	
	//Função strupr() coloca toda a string em caixa alta

	return 0;	
}
