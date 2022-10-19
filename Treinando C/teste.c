#include <stdio.h>

int main()
{
	float gasto,imposto;
	
	scanf("%f",&gasto);
	
	if (gasto > 500)
	{
		imposto = (gasto - 500)*50 /100;
		printf("Voce pagara mais %.2f de imposto", imposto);
	}
	printf("Deu nada");
	return 0;
}

