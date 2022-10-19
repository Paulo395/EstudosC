#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int valor;
	
	printf("Digite um valor de 1 a 7: ");
	scanf("%d", &valor);
	
	switch(valor)
	{
		case 1:
			printf("Domingo.");
			break;
			
		case 2:
			printf("Segunda.");
			break;
			
		case 3:
			printf("Terça.");
			break;
			
		default:
			printf("Valor invalido.");
	}
	return 0;
}
