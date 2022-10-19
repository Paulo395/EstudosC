//estrutura de decisão switch
#include <stdio.h>
#include<locale.h>

int main()
{
float v1,v2;
int opcao;
setlocale(LC_ALL,"portuguese");

printf("\n\t Peração entre 2 valores\n");
printf("\n Digite o primeiro valor: ");
scanf("%f", &v1);
printf("\n Digite o segundo valor: ");
scanf("%f", &v2);

printf("\n Qual operaçao deseja fazer:\n");
printf("Digite 1: soma\n");
printf("Digite 2: subtraçao\n");
printf("Digite 3: divisão\n");
printf("Digite 4: multiplicaçao\n");
scanf("%D", &opcao);

switch(opcao)
{
case 1:
printf(" %.1f + %.1f = %.1f ",v1,v2,(v1+v2)); /* %.1f é para imprimir o
número de ponto flutuante com uma casa após a vírgula */
break;
case 2:
printf(" %.1f - %.1f = %.1f ",v1,v2,(v1-v2));
break;
case 3:
printf("%.1f : %.1f = %.1f",v1,v2,(v1/v2));
break;
case 4:
printf("%.1f * %.1f = %.1f",v1,v2,(v1*v2));
break;
default:
printf("\n opção invalida");
}
return 0;
}
