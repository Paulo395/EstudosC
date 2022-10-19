#include <stdio.h>

struct cadastro{
	int codigo;
	char nome[30];
};

void main(){
	struct cadastro c;
	scanf("%s", c.nome);
	printf("%s", c.nome);
}
