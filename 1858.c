#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void ler(int num[], int cont)
{
    if(cont<6)
    {
        scanf("%d", &num[cont]);
        ler(num, cont+1);
    }
}
void bubble(int num[], int i, int tamanho)
{
    if(i <= tamanho - 1)
    {
        if(num[i]>num[i+1])
        {
            int aux=num[i];
            num[i] = num[i+1];
            num[i+1] = aux;
        }
        bubble(num, i+1, tamanho);
    }
}
void ordenar(int num[], int i, int tamanho)
{
    if(i<tamanho-1)
    {
        bubble(num, i, tamanho);
        ordenar(num, i, tamanho-1);
    }
}
int main() 
{
    int num[6];
    ler(num, 0);
    ordenar(num, 0, 6-1);
    printf("%d\n%d\n", num[0], num[5]);
	return 0;
}
