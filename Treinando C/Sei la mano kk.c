#include <stdio.h>
#define MAX 10

struct a{
	int a,b,c;
	float x,y,z;
};

int main(){
	struct a t[MAX];
	
	scanf("%d", &t[1].a);
	printf("%d", &t[1].a);
	getchar();
}
