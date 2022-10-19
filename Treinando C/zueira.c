#include <stdio.h>
#include <stdlib.h>

int a, soma;

void main(){
  printf("*****Quantos anos voce tera daqui a cinco anos!**** \n");
  printf("Quantos anos voce tem?: \n");
  scanf("%d",&a);
  system("cls");
  
  soma = a + 5;
  
  printf("Voce tera %d anos \n", soma);
system("pause");

}
