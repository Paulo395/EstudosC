#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define bubble 10

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num[bubble];
	int i, aux, contador;
	
	printf("Digite dez numeros para o Array: \n");
	for(i = 0;i<bubble;i++){
		scanf("%4d", &num[i]);
	}
	
	printf("Itens antes do blubble: ");
	for(i = 0;i<bubble;i++){
		printf("%4d", num[i]);
	}
	
	for (contador = 1;contador < bubble; contador++){
		for(i = 0;i<bubble;i++){
			if(num[i] > num[i + 1]){
				aux = num[i];
				num[i] = num[i + 1];
				num[i + 1] = aux;
			}
		}
	}
	
	printf("\nItens depois do bubble: ");
	for(i = 0;i<bubble;i++){
		printf("%4d", num[i]);
	}
	return 0;
}


