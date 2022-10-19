// Atividade Linguas
// Aluno: Paulo Henrique de Oliveira

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int Linguas;
	
	printf("\nBom dia, escolha o idioma\n");
	do{
		printf("\n\nDigite 1 para Português \n");
		printf("Digite 2 para Inglês \n");
		printf("Digite 3 para Japonese \n");
		printf("Digite 4 para Espanhol \n");
		printf("Digite 5 para Grego \n");
		printf("Digite 6 para Coreano \n");
		printf("Digite 7 para Russo \n");
		printf("Digite 8 para Chines \n");
		printf("Digite 9 para Arábe \n");
		printf("Digite 0 para Sair \n");
	    scanf("%d", &Linguas);
	    
		switch(Linguas) {
		case 1:
			printf("\n Bem-vindo ao Brasil!");
		break;
		case 2:
			printf("\n Welcome to United States!");
		break;
		case 3:
			printf("\n Nihon e yokoso!");
		break;
		case 4:
			printf("\n Bienvenido a España!");
		break;
		case 5:
			printf("\n Kalos irthes stin ELLADA!");
		break;
		case 6:
			printf("\n hangug-e osin geos-eul hwan-yeonghabnida!");
		break;
		case 7:
			printf("\n Dobro pozhalovat' v Rossiyu!");
		break;
		case 8:
			printf("\n Huanyíng lái dào zhongguó!");
		break;
		case 9:
			printf("\n marhabaan bikum fi alearabia!");
		break;
		case 0:
			printf("\n Obrigado por utilizar nossos serviços\n");
		break;	
	default:
		printf("Digite 0 a 9 para ver as diferentes línguas");
}
	}while(Linguas);
	system ("pause");
}
