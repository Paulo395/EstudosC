//Aluno: Paulo Henrique de Oliveira
//Atividade: Fun��o com passagem de par�metros
#include <stdio.h>
int soma(int valor1, int valor2)
{
	int resultsoma;
	resultsoma=valor1+valor2;
	return resultsoma;
}
int subtracao(int valor1, int valor2)
{
	int resultsub;
	resultsub=valor1-valor2;
	return resultsub;
}
int multiplicacao(int valor1, int valor2)
{
	int resultmult;
	resultmult=valor1*valor2;
	return resultmult;
}
int divisao(int valor1, int valor2)
{
	int resultdiv;
	resultdiv=valor1/valor2;
	return resultdiv;
}

int main ()
{
	int valor1;
	int valor2;
	printf("Escreva o primeiro valor: \n");
	scanf("%d", &valor1);
	printf("Escreva o segundo valor: \n");
	scanf("%d", &valor2);
	int resultsoma;
	resultsoma = soma(valor1, valor2);
	printf("a soma �: %d \n", resultsoma);
	int resultsub;
	resultsub = subtracao(valor1, valor2);
	printf("a subtracao �:%d \n", resultsub);
	int resultmult;
	resultmult = multiplicacao(valor1, valor2);
	printf("a multiplicacao �:%d \n", resultmult);
	int resultdiv;
	resultdiv = divisao(valor1, valor2);
	printf("a divisao �:%d \n", resultdiv);
	
	return 0;
}
