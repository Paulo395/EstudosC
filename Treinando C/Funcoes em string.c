/*
 Aulas Kerlla 20/04/2021
 Funções da biblioteca string.h
 
 strupr() strlwr() strcat()
*/
#include <stdio.h>
#include <string.h>
#define MAX 30

int main()
{	
	/*
	 Função strupr()
	 
	 Tranforma toda a string em caixa alta
	 Ex: strupr(nome) 
	 
	 Armazena no variavel em caixa alta
	 Ex: strupr(gets(nome));
	*/
	
	/*
	 Função strlwr()
	 
	 Tranforma toda a string em minusculas
	 Ex: strlwr()
	 
	 Armazena na variavel em caixa alta
	 Ex: strlwr(gets(nome))
	*/
	
	/*
	 Função strcat()
	 
	 Une duas strings na mesma variavel
	 Ex: stecat(nome,sobrenome)
	*/
	
	/*
	 Cada Função pode ser utilizada dentro de outra Função
	 Ex: printf("%s",strcat(nome,sobrenome));
	*/
	
	char nome=[MAX];
	char sobrenome[MAX];
	
	puts("Digite seu nome: ");
	strupr(gets(nome));
	
	puts("Digite seu sobrenome: ");
	strupr(gets(sobrenome));
	
	printf("%s",strcat(nome,sobrenome));
	return 0;
}
