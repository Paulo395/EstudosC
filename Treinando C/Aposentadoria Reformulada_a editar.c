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
			printf("Voc� n�o possui a idade nessesario para se aposentar.\n\n");
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
			printf("Voc� n�o possui a idade nessesario para se aposentar.\n\n");
		}
		
		if(ano_contr <= 2006)
		{
			//Ano 2006 pois er� necessarios pelo menos 15 anos de contribui��o para Mulheres.
			controle2++;
		}
		else
		{
			printf("Voc� n�o possui o tempo de contribui��o nessesario para se aposentar.\n\n");
		}
	}
	else
	{
		printf("Comando em gen�ro desconhecido, se cadastre novamente.\n\n");
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
	if(genero == 'm')
	{
		if(ano_contr <= 1984)
		{
			//Ano 1984 pois er� necessario pelo menos 35 anos de contribui��o para Homens.
			calc_aposentadoria();
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
			calc_aposentadoria();
		}
		else
		{
			printf("Voc� n�o possui o tempo de contribui��o nessesario para se aposentar.\n\n");
		}
	}
	else
	{
		printf("Comando em gen�ro desconhecido, se cadastre novamente.\n\n");
	}
	
	if(controle2 == 2)
	{
		calc_aposentadoria();
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
		
		if(ano_contr > 2006)
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

int main()
{
	setlocale(LC_ALL, "Portuguese");
    printf("Nome: ");
	scanf("%s", &nome);
	printf("Qual � o seu genero? (M/F)");
	scanf("%s", &genero);
	printf("Ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	printf("Em que ano voc� come�ou suas contribui��es ao INSS?: ");
	scanf("%d", &ano_contr);
	printf("Em media qual era o seu sal�rio? ");
	scanf("%f", &media_salario);
	
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
		consulta_aposentadoria();
	}
	return 0;
}
