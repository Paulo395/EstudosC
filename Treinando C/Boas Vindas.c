#include <stdio.h>
#include <locale.h>

void boasVindas(struct pessoa p){
	if(p.genero== 'm'){
		printf("Bem vindo ");
	}else{
		printf("Bem vinda ");
	}
	
	printf("%s", p.nome);
	getchar();
	printf(", espero que esteja bem.");
}

struct pessoa{
	int codigo;
	char nome[20];
	char genero;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	struct pessoa p;
	printf("Qual é o seu nome?\n>>>");
	fgets(p.nome,20,stdin);
	
	printf("Qual é o seu genero? (M/F)\n>>>");
	scanf("%c", &p.genero);
	
	boasVindas(struct pessoa);
	return 0;
}
