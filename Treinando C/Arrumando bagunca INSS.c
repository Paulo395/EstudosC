/*
	Name: Meu INSS
	Copyright: 
	Author: Paulo Henrique de Oliveira
	Date: 22/04/21 02:26
	Description: O objetivo do código é simular o cadatros no INSS e verificar
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
	printf("Comando não reconhecido, tente novamente.\n");
	printf("(Você ainda tem %d tentativas.)\n\n", tentativas);
}

void idade_aposentadoria()
{
	/*
	 Aposentadoria por idade.
	 Aposentadoria pré_reforma valida ate 2019
	 Esta aposentadoria podia ser solicitada com idade minima e tempo de contribuição.
	*/
	int controle2=0;
	if(genero == 'm')
	{
		if(ano_nascimento <= 1954)
		{
			//Ano 1954 pois erá necessario pelo menos 65 anos até 2019.
			printf("Idade minima valida.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui a idade nessesario para se aposentar.\n");
		}
		
		if(ano_contr <= 2006)
		{
			//Ano 2006 pois erá necessario pelo menos 15 anos de contribuição para Homens.
			printf("Tempo de contribuição minimo alcançado.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui o tempo de contribuição nessesario para se aposentar.\n\n");
		}
	}
	else if(genero == 'f')
	{
		if(ano_nascimento <= 1959)
		{
			//Ano 1959 pois erá necessario pelo menos 60 anos até 2019.
			printf("Idade minima valida.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui a idade nessesario para se aposentar.\n");
		}
		
		if(ano_contr <= 2006)
		{
			//Ano 2006 pois erá necessarios pelo menos 15 anos de contribuição para Mulheres.
			printf("Tempo de contribuição minimo alcançado.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui o tempo de contribuição nessesario para se aposentar.\n\n");
		}
	}
	else
	{
		printf("Caractere em genêro desconhecido, se cadastre novamente.\n\n");
	}
	
	if(controle2 == 2)
	{
		printf("Parabéns %s, você passou por todos os criterios para receber uma aposentadoria.\n\n", nome);
	}
}

void contr_aposentadoria()
{
	/*
	Aposentadoria por tempo de contribuição
	Aposentadoria pré_reforma valida ate o final de 2019
	essa aposentadoria podia ser efetuada até antes da reforma da previdencia
	podendo se aposentador apenas por tempo de contribuição
	*/
	int controle2 = 0;
	if(genero == 'm')
	{
		if(ano_contr <= 1984)
		{
			//Ano 1984 pois erá necessario pelo menos 35 anos de contribuição para Homens.
			printf("Tempo de contribuição minimo alcançado.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui o tempo de contribuição nessesario para se aposentar.\n\n");
		}
	}
	else if(genero == 'f')
	{
		if(ano_contr <= 1989)
		{
			//Ano 1989 pois erá necessarios pelo menos 30 anos de contribuição para Mulheres.
			printf("Tempo de contribuição minimo alcançado.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui o tempo de contribuição nessesario para se aposentar.\n\n");
		}
	}
	else
	{
		printf("Caractere em genêro desconhecido, se cadastre novamente.\n\n");
	}
	
	if(controle2 == 2)
	{
		printf("Parabéns %s, você passou por todos os criterios para receber uma aposentadoria.\n\n", nome);
	}
}

void nova_aposentadoria()
{
	/*
	 Aposentadoria por anos de serviço mais idade.
	 Aposentadoria pòs-reforma
	 para contribuintes que não completaram as contribuições ao INSS até 2019
	 Agora tendo novos criterios para a validação do beneficio, como ano_nascimento minina e tempo de
	 contribuição reajustados.
	*/
	int controle2 = 0;
	printf("Se cumprido os criterios de idade e contribuição você receberá aposentadoria.\n");
	if (genero == 'm')
	{
		if(ano_nascimento <= 1956)
		{
			//Ano 1956 pois é necessario ter 65 anos para solicitar o beneficio.
			printf("Idade minima valida.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui a idade minima para se aposentar.\n");
		}
		
		if(ano_contr <= 2001)
		{
			//ano 2001 pois é necessario 20 anos de contribuição para solicitar o beneficio.
			printf("Tempo de contribuição minimo alcançado.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui o tempo de carencia nessesario para se aposentar.\n");
		}
	}
	else if(genero == 'f')
	{
		if(ano_nascimento <= 1959)
		{
			//Ano 1959 pois é necessario ter 62 anos para solicitar o beneficio.
			printf("Idade minima valida.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui a idade minima para se aposentar.\n");
		}
		
		if(ano_contr <= 2006)
		{
			//Ano 2006 pois é necessario 15 anos de contribuições para solicitar o beneficio.
			printf("Tempo de contribuição minimo alcançado.\n");
			controle2++;
		}
		else
		{
			printf("Você não possui o tempo de carencia nessesario para se aposentar.\n");
		}
    }
	
	if(controle2 == 2)
	{
		printf("Parabéns %s, você passou por todos os criterios para receber uma aposentadoria.\n\n", nome);
	}
}

void inss()
{
	//Aqui irá ser consultado informações sobre o pagamento do inss
	int comando;
	float inss;
	printf("Bom dia %s, você está trabalhando atualmente?\n\n", nome);
	printf("1-\tEmpregado\n2-\tAutônomo\n3-\tDesempregado\n");
	scanf("%d", &comando);
	
	switch(comando)
	{
		case 1:
			printf("Seu empregador é o responsaveis pelo pagamento do INSS, que consiste sobre uma porcentagem de seu salário.\n");
			printf("Consulte seu RH para mais informações.\n\n");
			break;
		case 2:
			printf("Como um autonomo você precisa se cadastrar na Previdencia Social.\n");
			printf("Pague o antes do dia 15 de cada mês para adiquirir sua aposentadoria.\n");
            break;
		case 3:
			printf("Como um desempregado com renda você pode se tornar um Segurado facultativo e garantir a sua aposentadoria\n");
			printf("Consulte a Previdencia social para mais informações.\n\n");
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
	printf("Qual é o seu genero? (M/F)");
	scanf("%s", &genero);
	printf("Ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	printf("Em que ano você começou suas contribuições ao INSS?: ");
	scanf("%d", &ano_contr);
	
	int idade_minima = ano_nascimento + 16;
	
	//Ira validar a idade minima para contribuição que é 16 anos.
	if(ano_contr < idade_minima)
	{
		printf("\nVocê só pode começar a contribuir a partir dos 16 anos.\n");
		printf("Informaçoes incoerrentes, se cadastre novamente.\n\n");
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
					printf("Primeiro você precisa realizar um cadastro.\n\n");
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
					printf("Primeiro você precisa realizar um cadastro.\n\n");
				}
				else if(controle == 1)
				{
					printf("Você precisa consultar seu INSS.\n\n");
				}
				else
				{
					printf("[Consultar aposentadoria]\n\n");
					printf("1-\tAposentadoria por idade\n2-\tAposentadoria por contribuição\n3-\tAposentadoria contribuição e idade\n");
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
		printf("Obrigado por ultilizar os nossos serviços.");
	}
	else
	{
		printf("Você exedeu as tentativas, tente novamente mais tarde.");
	}
	return 0;
}

