#include <stdio.h>
#include <locale.h>
main(){
	float salario;
	float gastos;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o seu sal�rio aqui:\n");
	scanf("%f", &salario);
	printf("qunato voc� gasta por m�s?: \n");
	scanf("%f", &gastos);
	
    printf("O seu sal�rio � R$ %.2f\n", salario);
    printf("O seu gasto por m�s foi de R$ %.2f\n", gastos);
    if(salario>gastos){
    	printf("Exelente, sobrou dinheiro.");
	}else{
		printf("Or�amento estourado");
	}
return 0;
}
