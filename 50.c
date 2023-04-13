#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void bubble(double altura[], int i, int tamanho)
{
    if (i < tamanho-1)
    {
        if(altura[i]>altura[i+1])
        {
            double aux = altura[i];
            altura[i] = altura[i+1];
            altura[i+1] = aux;
        }
        bubble(altura, i+1, tamanho);
    }
}
void ordenar(double altura[], int i, int tamanho)
{
    if (i < tamanho - 1)
    {
        bubble(altura, i, tamanho);
        ordenar(altura, i, tamanho - 1);
    }
}
void ler(double altura[], int cont)
{
    if (cont == 4)
    {
        return;
    }
    else
    {
        scanf("%lf", &altura[cont]);
        ler(altura, cont + 1);
    }
}
int main()
{
    double altura[4];
    ler(altura, 0);
    ordenar(altura, 0, 4);
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", altura[0], altura[2], altura[3], altura[1]);
    return 0;
}
