#include <stdio.h>
#include <locale.h>

/*
 Exemplos Questionario 04/05
*/

int main()
{
	setlocale(LC_ALL,"portuguese");
    char str[20]={"12345678901234567890"};
	printf("Quest�o 4: %d\n", str[19]);//Som, ele guarda 20..indice n�o � quantidade
	
	system("pause");
}
