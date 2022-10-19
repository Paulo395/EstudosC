/*
	Name: Funcions/Procedure
	Copyright: 
	Author: 
	Date: 20/04/21 10:20
	Description: ultilizando as Fun��es
*/

#include <stdio.h>
#include <locale.h>

//Subcun�oes em cima
//Fun�oes int o return n�o � obrigatorio, pois j� existe no main() 

int somar(int x, int y)
{
 	int soma; 
	soma=x+y;
 	printf("O valor da soma �: %i\n", soma);
}

int sub(int x, int y)
{
 	int sub; 
	sub=x-y;
 	printf("O valor da subtra��o �: %i\n", sub);
}

int mult(int x, int y)
{
 	int mult; 
	mult=x*y;
 	printf("O valor da multiplica��o �: %i\n", mult);
}

int div(int x, int y)
{
 	int div; 
	div=x/y;
 	printf("O valor da divis�o �: %i\n", div);
}

void imprime_mensagem()
{
	printf("C�digo finalizado.");
}

int main()
{
	//Fun��o principal
	setlocale(LC_ALL, "Portuguese");
	int soma, nota1, nota2;
	nota1=10;
	nota2=8;
	
	//Fun��es com passagem de parametros
	somar(nota1, nota2);
	sub(nota1, nota2);
	mult(nota1, nota2);
	div(nota1, nota2);
	
	//Fun��o sem passagem de parametros
	imprime_mensagem();
	return 0;
}
