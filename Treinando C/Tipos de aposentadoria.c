void calc_aposentadoria()
{
	switch(genero)
	{
		// valor a ser valiado não é a idade e sim o tempo de contribuição
		// posso preguntar em que ano a pessoa começou a trabalhar
		// perguntar média salarial
		case 'm': case 'M':
			if(ano_contr <= 1994)
			{
				/*
				 Aposentadoria pré-reforma
				 para contribuintes que completaram a contribuiçaõ da Previdencia Social ate 2019
				*/
				
				printf("O valôr da sua aposentadoria será a média dos 80% dos seu maiores salários.\n\n");
				aposentadoria = (media_salario * 80) /100;// preciso criar o media salário
			}
			else
			{
				/*
				 Aposentadoria prós-reforma 2019
				 Agora com criterios de idade minina e tempo de contribuição ao INSS.
				*/
				
				printf("Se cumprido os criterios de idade e contribuição você receberá aposentadoria.\n\n");
				
				if(ano_nascimento >= 1956 && ano_contr <= 2001)//rever comando if
				{
					//está dizendo que eu com 21 anos posso me aposentar
					printf("Você pode receber aposentadoria.\n");
					aposentadoria = (media_salario * 60)/100;
				}
				else
				{
					printf("Você não pode receber aposentadoria.\n\n");
				}
			}
			
			printf("Senhor %s a sua aposentaria será de R$%.2f.", &nome, &aposentadoria);
			
			break;
		case 'f': case 'F':
			if(ano_contr <= 1994)
			{
				//Aposentadoria pré-reforma
				printf("O valôr da sua aposentadoria será a média dos 80% dos seu maiores salários.\n\n");
				aposentadoria = (media_salario * 80) /100;
			}
			else
			{
				//Aposentadoria pós-reforma
				printf("Se cumprido os criterios de idade e contribuição voce receberá aposentadoria.\n\n");
				
				if(ano_nascimento >= 1959 && ano_contr <= 2006)
				{
					//ter 62 anos e 15 anos de contribuição
					printf("Você pode receber aposentadoria.");
					aposentadoria = (media_salario * 60)/100;
				}
				else
				{
					printf("Você não pode receber aposentadoria.\n\n");
				}
			}
			
			printf("Senhora %s a sua aposentaria será de R$%.2f.", &nome, &aposentadoria);
			break;
			
		default:
			printf("Caractere desconhecido em genero, faça o cadastro novamente.\n\n");
			break;
	}
}

int main()
{
	switch(ano_contr)
	{
		case (ano_contr <= 1994):
			/*
		     Aposentadoria pré-reforma
		     para contribuintes que completaram a contribuiçaõ da Previdencia Social ate 2019.
		    */
			if(genero == 'm' || genero == 'f')
			{	
				aposentadoria = (media_salario * 80) /100;
			}
			printf("Senhor %s a sua aposentaria será de R$%.2f.", &nome, &aposentadoria);
			break;
		case (ano_contr > 1994):
			/*
			 Aposentadoria pòs-reforma
			 para contribuintes que não completaram as contribuições ao INSS até 2019
			 Agora tendo novos criterios para a validação do beneficio, como idade minina e tempo de
			 contribuição reajustados.
			*/
			printf("Se cumprido os criterios de idade e contribuição voce receberá aposentadoria.\n");
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
				printf("Você não pode receber aposentadoria.\n\n");
			}
			
			printf("Senhora %s a sua aposentaria será de R$%.2f.", &nome, &aposentadoria);
			break;
			
		default:
			tentativas--;
		    printf("Comando não reconhecido, tente novamente.\n");
		    printf("(Você ainda tem %d tentativas.)\n\n", tentativas);
			break;
	}
	printf("Senhor(a) %s a sua aposentaria será de R$%.2f.", &nome, &aposentadoria);
	return 0;
}
