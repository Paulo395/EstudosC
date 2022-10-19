#include <stdio.h>

struct cliente{
	int codigo;
	char nome[20];
};

void cadastro(struct cliente c){
	scanf("%d", &c.codigo);
	getchar();
	fgets(c.nome,20,stdin);
}

int main(){
	struct cliente c;
	cadastro();
	getchar();
}
