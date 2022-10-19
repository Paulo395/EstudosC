#include <stdio.h>
#include <locale.h>
#define MAX 30

char nome[MAX];
char genero='m';
int ano_nascimento;
int tentativas=4;
int controle=0;
int ano_contr;
float media_salario;
float aposentadoria=0;

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
			printf("Você não possui a idade nessesario para se aposentar.\n\n");
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
			printf("Você não possui a idade nessesario para se aposentar.\n\n");
		}
		
		if(ano_contr <= 2006)
		{
			//Ano 2006 pois erá necessarios pelo menos 15 anos de contribuição para Mulheres.
			controle2++;
		}
		else
		{
			printf("Você não possui o tempo de contribuição nessesario para se aposentar.\n\n");
		}
	}
	else
	{
		printf("Comando em genêro desconhecido, se cadastre novamente.\n\n");
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
	if(genero == 'm')
	{
		if(ano_contr <= 1984)
		{
			//Ano 1984 pois erá necessario pelo menos 35 anos de contribuição para Homens.
			calc_aposentadoria();
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
			calc_aposentadoria();
		}
		else
		{
			printf("Você não possui o tempo de contribuição nessesario para se aposentar.\n\n");
		}
	}
	else
	{
		printf("Comando em genêro desconhecido, se cadastre novamente.\n\n");
	}
	
	if(controle2 == 2)
	{
		calc_aposentadoria();
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
		
		if(ano_contr > 2006)
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

int main()
{
	setlocale(LC_ALL, "Portuguese");
    printf("Nome: ");
	scanf("%s", &nome);
	printf("Qual é o seu genero? (M/F)");
	scanf("%s", &genero);
	printf("Ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	printf("Em que ano você começou suas contribuições ao INSS?: ");
	scanf("%d", &ano_contr);
	printf("Em media qual era o seu salário? ");
	scanf("%f", &media_salario);
	
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
		consulta_aposentadoria();
	}
	return 0;
}
