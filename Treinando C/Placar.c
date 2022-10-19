//atividade placar do jogo
//Aluno: Paulo Henrique de Oliveira

#include <stdio.h>

int main()
{
    int gol1,gol2;
	char time1[10],time2[10];

    printf("Escreva o nome do primeiro time de futebol: \n");
    scanf("%s", time1);
    system("cls");
	
	printf("Escreva o nome do segundo time de futebol: \n");
    scanf("%s", time2);
    system("cls");
    
	printf("Quantos gols o '%s' fez? \n", time1);
	scanf ("%d", &gol1);
    system("cls");

	printf("Quantos gols o '%s' fez? \n", time2);
	scanf ("%d", &gol2);
	system("cls");
	
	if(gol1>gol2)
	{
	 printf("'%s' venceu \n", &time1);
	}
	else
	{
	 printf("'%s' venceu \n", &time2);
	}
	system("pause");
}
	
