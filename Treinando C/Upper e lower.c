/*
Aula Kella 20/04/2021
Funçoes que vão converter caracteres ou strings/
toupper()/lower().
*/
#include <stdio.h>
#define MAX 30

int main()
{
	char sexo;
	sexo='f';//Java estava certo quanto as aspas simples ''
	
	//toupper() deixa os caracteres maiusculos
	printf("%c\n", toupper(sexo));
	
	sexo='M';
	
	//tolower() deixa os caracteres minusculos
	printf("%c\n", tolower(sexo));
	
	return 0;	
}
