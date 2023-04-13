#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void friday(int cont, int resultado)
{
    if(cont==0)
    {
        printf("%d", resultado);
        return;
    }
    else
    {
        double valorO, valorD;
        scanf("%lf", &valorO);
        scanf("%lf", &valorD);
        if(valorO*0.8>=valorD)
        {
            friday(cont-1, resultado+1);
        }
        else
        {
            friday(cont-1, resultado);
        }
    }
}
int main() 
{
    friday(5, 0);
	return 0;
}
