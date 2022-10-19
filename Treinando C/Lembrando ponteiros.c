#include <stdio.h>

void troca(int *x,int *y){
	int aux = *x;
	*x = *y;
	*y = aux;
}

int main(){
	int x,y,z;
	
	scanf("%d%d%d", &x,&y,&z);
	
	if(x > y || x > z){
		if(x > y){
			troca(&x,&y);
		}
		if(x > z){
			troca(&x,&z);
		}
	}
	
	if(y > z){
		troca(&y,&z);
	}
	
	printf("%d %d %d", x, y, z);
	getchar();
}
