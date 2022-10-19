#include <stdio.h>

int main()
{
	float notas[0][4],media;
	
	printf("Digite a nota do primeiro periodo: ");
	scanf("%f", &notas[0][0]);
	printf("Digite a nota do primeiro periodo: ");
	scanf("%f", &notas[0][1]);
	printf("Digite a nota do primeiro periodo: ");
	scanf("%f", &notas[0][2]);
	printf("Digite a nota do primeiro periodo: ");
	scanf("%f", &notas[0][3]);
	
//	media = (notas[0][0]+notas[0][1]+notas[0][2]+notas[0][3]);
	
	printf("%4f", media);
	return 0; 
}
