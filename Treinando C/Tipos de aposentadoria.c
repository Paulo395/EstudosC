void calc_aposentadoria()
{
	switch(genero)
	{
		// valor a ser valiado n�o � a idade e sim o tempo de contribui��o
		// posso preguntar em que ano a pessoa come�ou a trabalhar
		// perguntar m�dia salarial
		case 'm': case 'M':
			if(ano_contr <= 1994)
			{
				/*
				 Aposentadoria pr�-reforma
				 para contribuintes que completaram a contribui�a� da Previdencia Social ate 2019
				*/
				
				printf("O val�r da sua aposentadoria ser� a m�dia dos 80% dos seu maiores sal�rios.\n\n");
				aposentadoria = (media_salario * 80) /100;// preciso criar o media sal�rio
			}
			else
			{
				/*
				 Aposentadoria pr�s-reforma 2019
				 Agora com criterios de idade minina e tempo de contribui��o ao INSS.
				*/
				
				printf("Se cumprido os criterios de idade e contribui��o voc� receber� aposentadoria.\n\n");
				
				if(ano_nascimento >= 1956 && ano_contr <= 2001)//rever comando if
				{
					//est� dizendo que eu com 21 anos posso me aposentar
					printf("Voc� pode receber aposentadoria.\n");
					aposentadoria = (media_salario * 60)/100;
				}
				else
				{
					printf("Voc� n�o pode receber aposentadoria.\n\n");
				}
			}
			
			printf("Senhor %s a sua aposentaria ser� de R$%.2f.", &nome, &aposentadoria);
			
			break;
		case 'f': case 'F':
			if(ano_contr <= 1994)
			{
				//Aposentadoria pr�-reforma
				printf("O val�r da sua aposentadoria ser� a m�dia dos 80% dos seu maiores sal�rios.\n\n");
				aposentadoria = (media_salario * 80) /100;
			}
			else
			{
				//Aposentadoria p�s-reforma
				printf("Se cumprido os criterios de idade e contribui��o voce receber� aposentadoria.\n\n");
				
				if(ano_nascimento >= 1959 && ano_contr <= 2006)
				{
					//ter 62 anos e 15 anos de contribui��o
					printf("Voc� pode receber aposentadoria.");
					aposentadoria = (media_salario * 60)/100;
				}
				else
				{
					printf("Voc� n�o pode receber aposentadoria.\n\n");
				}
			}
			
			printf("Senhora %s a sua aposentaria ser� de R$%.2f.", &nome, &aposentadoria);
			break;
			
		default:
			printf("Caractere desconhecido em genero, fa�a o cadastro novamente.\n\n");
			break;
	}
}

int main()
{
	switch(ano_contr)
	{
		case (ano_contr <= 1994):
			/*
		     Aposentadoria pr�-reforma
		     para contribuintes que completaram a contribui�a� da Previdencia Social ate 2019.
		    */
			if(genero == 'm' || genero == 'f')
			{	
				aposentadoria = (media_salario * 80) /100;
			}
			printf("Senhor %s a sua aposentaria ser� de R$%.2f.", &nome, &aposentadoria);
			break;
		case (ano_contr > 1994):
			/*
			 Aposentadoria p�s-reforma
			 para contribuintes que n�o completaram as contribui��es ao INSS at� 2019
			 Agora tendo novos criterios para a valida��o do beneficio, como idade minina e tempo de
			 contribui��o reajustados.
			*/
			printf("Se cumprido os criterios de idade e contribui��o voce receber� aposentadoria.\n");
			if(genero == 'm' && idade >= 65)
			{
				aposentadoria = (media_salario * 80) /100;
			}
			else if(genero == 'f' && idade >= 62)
			{
				aposentadoria = (media_salario * 60) /100;
			}
			else
			{
				printf("Voc� n�o pode receber aposentadoria.\n\n");
			}
			
			printf("Senhora %s a sua aposentaria ser� de R$%.2f.", &nome, &aposentadoria);
			break;
			
		default:
			tentativas--;
		    printf("Comando n�o reconhecido, tente novamente.\n");
		    printf("(Voc� ainda tem %d tentativas.)\n\n", tentativas);
			break;
	}
	printf("Senhor(a) %s a sua aposentaria ser� de R$%.2f.", &nome, &aposentadoria);
	return 0;
}
