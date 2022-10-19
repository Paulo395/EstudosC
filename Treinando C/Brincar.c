#include <stdio.h>
#include <locale.h>

int respostas(int x){
	if(x == 1){
		return 1;
	}else{
		return 0;
	}
}

void perguntas(int x){
	printf("Pergunta 0%d:\n", x + 1);
	if(x == 0){
		printf("Qual é a capital do Brasil?\n1-\tBrasilia\n2-\tSão Paulo");
	}else if(x == 1){
		printf("Quando são efetuadas as eleiçõe?:\n1-\tA cada 4 anos\n2-\tA cada 2 anos");
	}else{
		printf("Quem foi o escritor mais influente do Brasil?\n1-\tMachado de Assis\n2-\tWillan Shakerspere");
	}
	printf("\n>>>");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\t\t-Questionario-\n\n\n");
	printf("\tDigite algo para começar.");
	getchar();
	system("cls");
	
	int i,r,pontos=0;
	for(i=0;i<3;++i){
		perguntas(i);
		scanf("%d", &r);
		pontos += respostas(r);
		system("cls");
	}
	
	printf("Você fez %d pontos.", pontos);
	getchar();
}
