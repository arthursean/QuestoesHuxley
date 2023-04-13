#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if(a==e && b==d)
    {
        printf("Feldspato, de um esporro no Gabro por mim");
    }
    else if(((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)%2 == 0 && ((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)%7!=0)
    {
        printf("Feldspato, va para Gemeo Calido");
    }
    else if(((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)%7 == 0 && ((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)%2!=0)
    {
        printf("Feldspato, va para Gemeo Cinzento");
    }
    else if(((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)>= 50000 && ((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)<=99999)
    {
        printf("Feldspato, va para Vale Incerto");
    }
    else if(((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)>= 100 && ((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)<=49999)
    {
        printf("Feldspato, va para Profundezas do Gigante");
    }
    else if(((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)>0 && ((a*10*10*10*10) + (b*10*10*10) + (c*10*10) + (d*10) + e)<3)
    {
        printf("Feldspato, va para Abrolho Sombrio");
    }
    else
    {
        printf("Feldspato, foi um erro de leitura");
    }


	return 0;
