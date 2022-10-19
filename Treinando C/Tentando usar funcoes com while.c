#include <stdio.h>

void tentativas(int contador)
{
	if(contador == 1)
	{
		printf("Você já usou uma tentativa extra.");
	}
	else if(contador == 2)
	{
		printf("Você já usou duas tentativa extra.");
	}
	else if(contador == 3)
	{
		printf("Você já usou três tentativa extra.");
	}
	else
	{
		printf("Tentativas exedidas, tente mais tarde.");
	}
}

int main()
{
	int resposta,contador;
	
	printf("Digite uma resposta: ");
	scanf("%d", &resposta);
	
	while (contador < 3)
	{
		switch(resposta)
		{
			case 1:
			{
				printf("Caso 1.");
				break;
			}
			case 2:
			{
				printf("Caso 2.");
				break;
			}
			default:
			{
				printf("Tem certeza?");
				scanf("%d", &resposta);
				
				if(resposta != 1 && resposta != 2)
				{
					contador++;
					tentativas(contador);
					break;
				}
			}
		}
	}
	return 0;
}
