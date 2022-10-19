#include <stdio.h>
#include <locale.h>
main(){
	float salario;
	float gastos;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o seu salário aqui:\n");
	scanf("%f", &salario);
	printf("qunato você gasta por mês?: \n");
	scanf("%f", &gastos);
	
    printf("O seu salário é R$ %.2f\n", salario);
    printf("O seu gasto por mês foi de R$ %.2f\n", gastos);
    if(salario>gastos){
    	printf("Exelente, sobrou dinheiro.");
	}else{
		printf("Orçamento estourado");
	}
return 0;
}
