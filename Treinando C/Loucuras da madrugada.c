#include <stdio.h>

int funcao(a,b)
{
	int funcao = a + b;
	printf("%d", funcao);
	
	return funcao;
}

int main()
{
	int a,b,c;
	
	a = 1;
	b = 2;
	c = a + b;
	funcao(a,b);
	
	//printf("%d", c);
	return 0;
}
