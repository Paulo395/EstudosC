#include <stdio.h>
#include <locale.h>
#include <conio.h>

int calculo(a,b)
{
	int calculo = a + b;
	printf("O resultado do calculo é: %d\n", calculo);
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a,b;
	
	printf("Digite dois número:\n");
	scanf("%d%d", &a, &b);
	
	calculo(a,b);
	
	printf("Deseja mais alguma coisa?");
	getch();
	return 0;
}
