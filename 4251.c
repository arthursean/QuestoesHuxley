#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int primo(int maior, int menor, int div, int i)
{
    int soma;
    soma = maior-menor;
    if(soma<i)
    {
        if(div==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if(soma%i==0)
        {
            return primo(maior, menor, div+1, i+1);
        }
        else
        {
            return primo(maior, menor, div, i+1);
        }
    }
}
int num(int cont, int pedido, int menor, int maior)
{
    int a;
    if(pedido == cont)
    {
        if(primo(maior, menor, 0, 1) == 1)
        {
            printf("As idades %d %d sao perfeitas\n", menor, maior);
            return 0;
        }
        if(primo(maior, menor, 0, 1) == 0)
        {
            printf("As idades %d %d nao sao perfeitas\n", menor, maior);
            return 0;
        }
    }
    else
    {
        scanf("%d", &a);
        if(cont == 0 || menor > a)
        {
            menor = a;
        }
        if(cont == 0 || maior < a)
        {
            maior = a;
        }
        return num(cont + 1, pedido, menor, maior);
    }
}
int main() 
{   
    int pedido;
    scanf("%d", &pedido);
    num(0, pedido, 0, 0);
	return 0;
}
