/*
	Name: Funcions/Procedure
	Copyright: 
	Author: 
	Date: 20/04/21 10:20
	Description: ultilizando as Funções
*/

#include <stdio.h>
#include <locale.h>

//Subcunçoes em cima
//Funçoes int o return não é obrigatorio, pois já existe no main() 

int somar(int x, int y)
{
 	int soma; 
	soma=x+y;
 	printf("O valor da soma é: %i\n", soma);
}

int sub(int x, int y)
{
 	int sub; 
	sub=x-y;
 	printf("O valor da subtração é: %i\n", sub);
}

int mult(int x, int y)
{
 	int mult; 
	mult=x*y;
 	printf("O valor da multiplicação é: %i\n", mult);
}

int div(int x, int y)
{
 	int div; 
	div=x/y;
 	printf("O valor da divisão é: %i\n", div);
}

void imprime_mensagem()
{
	printf("Código finalizado.");
}

int main()
{
	//Função principal
	setlocale(LC_ALL, "Portuguese");
	int soma, nota1, nota2;
	nota1=10;
	nota2=8;
	
	//Funções com passagem de parametros
	somar(nota1, nota2);
	sub(nota1, nota2);
	mult(nota1, nota2);
	div(nota1, nota2);
	
	//Função sem passagem de parametros
	imprime_mensagem();
	return 0;
}
