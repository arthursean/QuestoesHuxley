#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void imprimir(char letra[], int cont)
{
    if(cont<0)
    {
        printf("\n");
    }
    else
    {
        printf("%c", letra[cont]);
        imprimir(letra, cont-1);
    }
}
void ler(char letra[], int cont)
{
    if ((scanf("%c", &letra[cont]) == EOF))
    {
        imprimir(letra, cont-1);
    }
    else
    {
        ler(letra, cont+1);
    }
}
int main()
{
    char letra[255];
    ler(letra, 0);
    return 0;
}
