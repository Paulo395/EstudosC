#include <stdio.h>
#define MAX 10

void insertion_sort(int *a);

int main(int argc, char** argv)
{
	int i, vet[MAX];
	
	for(i = 0;i<MAX; i++){
		printf("Digite um valor: ");
		scanf("%d", &vet[i]);
	}
	
	insertion_sort(vet);
	
	printf("\nValores ordenados: \n \n");
	for(i = 0;i<MAX; i++){
		printf("%d \n", vet[i]);
	}
	return 0;	
}
void insertion_sort(int *a)
{
	int i, j, tmp;
	
	for(i = 1;i<MAX;i++){
		tmp = a[i];
		for(i = 1; j >= 0 && tmp < a[j]; j--){
			a[j+1] = a[j];
		}
		a[j+1] = tmp;
	}
}
