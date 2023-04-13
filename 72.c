#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void ler(int num[],int contador,int cont)
{
    if(contador < cont)
    {
        scanf("%d", &num[contador]);
        ler(num, contador +1, cont);
    }
}
void imprimir(int num[], int contador)
{
    if(contador>=0)
    {
        printf("%d ", num[contador]);
        imprimir(num, contador-1);
    }
}
int main()
{
    int cont;
    scanf("%d", &cont);
    int num[cont];
    ler(num, 0, cont);
    imprimir(num, cont-1);
	return 0;
}
