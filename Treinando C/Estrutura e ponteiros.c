#include <stdio.h>
#include <locale.h>
#define MAX 20

struct pessoa{
	int codigo;
	char nome[MAX+1];
	char genero[MAX+1];
};
void ler_estrutura(struct pessoa p){
	printf("Seu nome é: %s", p.nome);
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	struct pessoa p[MAX];
	printf("Digite o seu nome\n>>>");
	fgets(p[0].nome,MAX,stdin);
	ler_estrutura(p[0]);
	getchar();
}
