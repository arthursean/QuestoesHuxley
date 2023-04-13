#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double blast(int cont_casa, double valor)
{   
    int a;
    scanf("%d", &a);
    if(a==999)
    {
        printf("%.2lf\n%d\n", valor, cont_casa);
        return 0;
    }
    else
    {
        if(a>2)
        {
            valor = valor + 12.89*(a-2);
            return blast(cont_casa + 1, valor);
        }
        else
        {
            return blast(cont_casa, valor);
        }
    }
	return 0;
}
int main()
{
    blast(0, 0);
    return 0;
}
