/*
	Name: Meu INSS
	Copyright: 
	Author: Paulo Henrique de Oliveira
	Date: 22/04/21 02:26
	Description: O objetivo do c�digo � simular o cadatros no INSS e verificar
	se o usuario esta apto areceber aposentadoria
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

char nome[20];
char genero;
int ano_nascimento;
int tentativas=4;
int controle=0;
int ano_contr;
float media_salario;
float aposentadoria=0;

void verificacao()
{
	tentativas--;
	printf("Comando n�o reconhecido, tente novamente.\n");
	printf("(Voc� ainda tem %d tentativas.)\n\n", tentativas);
}

void idade_aposentadoria()
{
	/*
	 Aposentadoria por idade.
	 Aposentadoria pr�_reforma valida ate 2019
	 Esta aposentadoria podia ser solicitada com idade minima e tempo de contribui��o.
	*/
	int controle2=0;
	if(genero == 'm')
	{
		if(ano_nascimento <= 1954)
		{
			//Ano 1954 pois er� necessario pelo menos 65 anos at� 2019.
			printf("Idade minima valida.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui a idade nessesario para se aposentar.\n");
		}
		
		if(ano_contr <= 2006)
		{
			//Ano 2006 pois er� necessario pelo menos 15 anos de contribui��o para Homens.
			printf("Tempo de contribui��o minimo alcan�ado.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui o tempo de contribui��o nessesario para se aposentar.\n\n");
		}
	}
	else if(genero == 'f')
	{
		if(ano_nascimento <= 1959)
		{
			//Ano 1959 pois er� necessario pelo menos 60 anos at� 2019.
			printf("Idade minima valida.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui a idade nessesario para se aposentar.\n");
		}
		
		if(ano_contr <= 2006)
		{
			//Ano 2006 pois er� necessarios pelo menos 15 anos de contribui��o para Mulheres.
			printf("Tempo de contribui��o minimo alcan�ado.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui o tempo de contribui��o nessesario para se aposentar.\n\n");
		}
	}
	else
	{
		printf("Caractere em gen�ro desconhecido, se cadastre novamente.\n\n");
	}
	
	if(controle2 == 2)
	{
		printf("Parab�ns %s, voc� passou por todos os criterios para receber uma aposentadoria.\n\n", nome);
	}
}

void contr_aposentadoria()
{
	/*
	Aposentadoria por tempo de contribui��o
	Aposentadoria pr�_reforma valida ate o final de 2019
	essa aposentadoria podia ser efetuada at� antes da reforma da previdencia
	podendo se aposentador apenas por tempo de contribui��o
	*/
	int controle2 = 0;
	if(genero == 'm')
	{
		if(ano_contr <= 1984)
		{
			//Ano 1984 pois er� necessario pelo menos 35 anos de contribui��o para Homens.
			printf("Tempo de contribui��o minimo alcan�ado.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui o tempo de contribui��o nessesario para se aposentar.\n\n");
		}
	}
	else if(genero == 'f')
	{
		if(ano_contr <= 1989)
		{
			//Ano 1989 pois er� necessarios pelo menos 30 anos de contribui��o para Mulheres.
			printf("Tempo de contribui��o minimo alcan�ado.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui o tempo de contribui��o nessesario para se aposentar.\n\n");
		}
	}
	else
	{
		printf("Caractere em gen�ro desconhecido, se cadastre novamente.\n\n");
	}
	
	if(controle2 == 2)
	{
		printf("Parab�ns %s, voc� passou por todos os criterios para receber uma aposentadoria.\n\n", nome);
	}
}

void nova_aposentadoria()
{
	/*
	 Aposentadoria por anos de servi�o mais idade.
	 Aposentadoria p�s-reforma
	 para contribuintes que n�o completaram as contribui��es ao INSS at� 2019
	 Agora tendo novos criterios para a valida��o do beneficio, como ano_nascimento minina e tempo de
	 contribui��o reajustados.
	*/
	int controle2 = 0;
	printf("Se cumprido os criterios de idade e contribui��o voc� receber� aposentadoria.\n");
	if (genero == 'm')
	{
		if(ano_nascimento <= 1956)
		{
			//Ano 1956 pois � necessario ter 65 anos para solicitar o beneficio.
			printf("Idade minima valida.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui a idade minima para se aposentar.\n");
		}
		
		if(ano_contr <= 2001)
		{
			//ano 2001 pois � necessario 20 anos de contribui��o para solicitar o beneficio.
			printf("Tempo de contribui��o minimo alcan�ado.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui o tempo de carencia nessesario para se aposentar.\n");
		}
	}
	else if(genero == 'f')
	{
		if(ano_nascimento <= 1959)
		{
			//Ano 1959 pois � necessario ter 62 anos para solicitar o beneficio.
			printf("Idade minima valida.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui a idade minima para se aposentar.\n");
		}
		
		if(ano_contr <= 2006)
		{
			//Ano 2006 pois � necessario 15 anos de contribui��es para solicitar o beneficio.
			printf("Tempo de contribui��o minimo alcan�ado.\n");
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui o tempo de carencia nessesario para se aposentar.\n");
		}
    }
	
	if(controle2 == 2)
	{
		printf("Parab�ns %s, voc� passou por todos os criterios para receber uma aposentadoria.\n\n", nome);
	}
}

void inss()
{
	//Aqui ir� ser consultado informa��es sobre o pagamento do inss
	int comando;
	float inss;
	printf("Bom dia %s, voc� est� trabalhando atualmente?\n\n", nome);
	printf("1-\tEmpregado\n2-\tAut�nomo\n3-\tDesempregado\n");
	scanf("%d", &comando);
	
	switch(comando)
	{
		case 1:
			printf("Seu empregador � o responsaveis pelo pagamento do INSS, que consiste sobre uma porcentagem de seu sal�rio.\n");
			printf("Consulte seu RH para mais informa��es.\n\n");
			break;
		case 2:
			printf("Como um autonomo voc� precisa se cadastrar na Previdencia Social.\n");
			printf("Pague o antes do dia 15 de cada m�s para adiquirir sua aposentadoria.\n");
            break;
		case 3:
			printf("Como um desempregado com renda voc� pode se tornar um Segurado facultativo e garantir a sua aposentadoria\n");
			printf("Consulte a Previdencia social para mais informa��es.\n\n");
			break;
		default:
			verificacao();
			break;
	}
	printf("Consulta realizada com sucesso!.\n\n");
	controle = 2;
}

void cadastro()
{
    printf("Nome: ");
	scanf("%s", &nome);
	printf("Qual � o seu genero? (M/F)");
	scanf("%s", &genero);
	printf("Ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	printf("Em que ano voc� come�ou suas contribui��es ao INSS?: ");
	scanf("%d", &ano_contr);
	
	int idade_minima = ano_nascimento + 16;
	
	//Ira validar a idade minima para contribui��o que � 16 anos.
	if(ano_contr < idade_minima)
	{
		printf("\nVoc� s� pode come�ar a contribuir a partir dos 16 anos.\n");
		printf("Informa�oes incoerrentes, se cadastre novamente.\n\n");
		controle=0;
	}
	else
	{
		printf("Cadastro realizado com sucesso!.\n\n");
		controle=1;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int comando;
	
	printf("\t\t-Projeto Meu INSS-\n\n\n");
	printf("\tPrecione uma tecla para continuar.");
	getch();
	system("cls");
	
	while(tentativas)
	{
		printf("\t\t-Meu INSS-\n\n");
	    printf("1-\tCadastro\n2-\tConsulta INSS\n3-\tConsultar aposentadoria\n0-\tSair\n");
	    scanf("%d", &comando);
	    
		switch(comando)
		{
			case 0:
				tentativas = 0;
				break;
			case 1:
				printf("\n[Cadastro]\n\n");
				cadastro();
				break;
			case 2:
				if(controle == 0)
				{
					printf("Primeiro voc� precisa realizar um cadastro.\n\n");
				}
				else
				{
					printf("\n[Consulta INSS]\n\n");
					inss();
				}
				
				break;
			case 3:
				if(controle == 0)
				{
					printf("Primeiro voc� precisa realizar um cadastro.\n\n");
				}
				else if(controle == 1)
				{
					printf("Voc� precisa consultar seu INSS.\n\n");
				}
				else
				{
					printf("[Consultar aposentadoria]\n\n");
					printf("1-\tAposentadoria por idade\n2-\tAposentadoria por contribui��o\n3-\tAposentadoria contribui��o e idade\n");
					scanf("%d", &comando);
					
					switch(comando)
					{
						case 1:
							idade_aposentadoria();
							break;
						case 2:
							contr_aposentadoria();
						    break;
						case 3:
							nova_aposentadoria();
							break;
						default:
							verificacao();
		                    break;
					}
				}
				break;
			default:
				verificacao();
				break;
		}
	}
	
	if(!comando)
	{
		printf("Obrigado por ultilizar os nossos servi�os.");
	}
	else
	{
		printf("Voc� exedeu as tentativas, tente novamente mais tarde.");
	}
	return 0;
}

