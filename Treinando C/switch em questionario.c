#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int res1,res2,tentativas,pontos;
	
	printf("----------Questionário----------\n");
	printf("Pergunta 1\nCerta 1\nErrada 2\n");
	scanf("%d", &res1);
	
	if(res1 == 1)
	{
		pontos++;
	}
	printf("Pergunta 2\nCerta 1\nErrada 2\n");
	scanf("%d", &res2);
	
	if(res2 == 1)
	{
		pontos++;
	}
	
/*	switch(pontos)
	{
		case 1:
			printf("Você fez um ponto.");
			break;
		case 2:
			printf("Você fez dois pontos.");
			break;
		default:
			printf("Você não fez nenhum ponto.");
			break;
	}*/
	
	if(pontos == 1)
	{
		printf("Você fez um ponto.");
	}
	else if(pontos == 2)
	{
		printf("Você fez dois pontos.");
	}
	else
	{
		printf("Você não fez nenhum ponto.");
	}
	return 0;
}
