#include <stdio.h>

int main()
{
	int limit,quant=0;
	char nome="Ebaaa";
	
//	printf("Digite um nome: ");
//    scanf("%c", &nome);
    
    printf("Quantas vezes gostaria de repeti-lo: ");
    scanf("%d", &limit);
    
    while(quant<=limit){
    	printf("%c", nome);
    	quant++;
	}
	return 0;
}
