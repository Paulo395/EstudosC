#include <stdio.h>
#include <locale.h>
main(){
	int num1;
	int num2;
	
	setlocate(LC_ALL, "portuguese");
	
	printf("Digite o primeiro numero\n");
	scanf("%d", &num1);
	printf("O numero digitado é %d \n", num1);
	
	printf("Digite o segundo numero\n");
	scanf("%d", &num2);
	printf("O numero digitado é %d \n", num2);
	
	if (num1 == num2){
	    printf ("O numero 1: %d é igual ao número 2: %d", num1, num2);
	}else {
		printf("O numero 1: %d não é igual ao número 2: %d", num1, num2);
	}
	return 0;
	
}

