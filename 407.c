#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int aux, int cont)
{
    int maior;
    if(aux==1)
    {
        return cont;
    }
    else
    {
        if(aux%2 != 0)
        {
            return func(aux*3+1, cont+1);
        }
        else
        {
            return func(aux/2, cont+1);
        }
    }
}
int teste(int i, int j, int maior)
{
    int aux;
    aux = i;
    if(i == j)
    {
        if(maior==0)
        {
            maior = func(aux, 1);
        }
        return maior;
    }
    if(maior<func(aux, 1))
    {
        maior = func(aux, 1);
    }
    return teste(i+1, j, maior);
}
int main()
{
    int i, j;
	if(scanf("%d%d", &i, &j) != EOF)
	{
	    printf("%d %d ", i ,j);
	    if(i>j)
	    {
	        printf("%d\n", teste(j,i,0));
	    }
        else
        {
            printf("%d\n", teste(i,j,0));
        }
	    return main();
	}
	else
	{
	    return 0;
	}
}
