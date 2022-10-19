#include <stdio.h>
#include <locale.h>

main(){
	
	int num1;
	int num2;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Escreva o primeiro numero: \n");
	scanf("%d", &num1);
	printf("O número escrito foi %d \n", num1);
	printf("Escreva o segundo numero: \n");
	scanf("%d", &num2);
	printf("O número escrito foi %d \n", num2);
		if (num1==num2){
		printf("Os numeros sao iguais");
		
		}else{
			printf("Os numeros sao diferentes");
		}
		
		return 0;
	
	
}
