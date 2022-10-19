#include <stdio.h>

int main()
{
	int num,tentativas=1;
	
	scanf("%d", &num);
	
	while(tentativas <= 3)
	{
		switch(num)
		{
			case 1:
				printf("ummm");
				break;
				tentativas++;
			case 2:
				printf("doiiiss");
				break;
			default:
				printf("tente denovo: ");
				scanf("%d", &num);
				tentativas++;
				break;
		}
	}
	printf("Acabou suas chances");
	return 0;
}
