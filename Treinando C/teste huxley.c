#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int array[10]={34,4,23,5,6,7,4,5,12,4};
    int cont=0;
    int n=0;
    int i;
    
    /*for(i=0;i<10;++i)
    {
        scanf("%d", array[i]);
    }*/
    
    int x=array[9];
    
    for(i=0;i<10;++i)
    {
        if(array[i] == x);
        cont++;
    }
    
    printf("O numero %d aprareceu %d vezes", x, cont);
	return 0;
}
