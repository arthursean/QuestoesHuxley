#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void ler(int figurinha[], int cont, int numero, int quantidadeJ, int quantidadeM)
{
    if(cont==numero)
    {
      printf("%d\n%d\n", quantidadeJ, quantidadeM);
    }
    else
    {
        scanf("%d", &figurinha[cont]);
        if(figurinha[cont]%2 == 0)
        {
            figurinha[numero] = figurinha[numero]+ figurinha[cont];
            ler(figurinha, cont+1, numero, quantidadeJ+1, quantidadeM);
        }
        else
        {
            figurinha[numero+1] = figurinha[numero+1] + figurinha[cont];
            ler(figurinha, cont+1, numero, quantidadeJ, quantidadeM+1);
            
        }
    }
}
int bubble(int figurinha[], int cont, int contx, int numero)
{
    if (contx < numero)
    {
        if(figurinha[cont]==figurinha[contx])
        {
            return figurinha[cont];
        }
        else
        {
            bubble(figurinha, cont, contx+1, numero);
        }
    }
    else
    {
        return 0;
    }
}
int imprimir(int figurinha[], int cont, int numero)
{
    if(cont==numero)
    {
        if(figurinha[numero]>figurinha[numero+1])
        {
            printf("%d\n", figurinha[numero]);
        }
        else
        {
            printf("%d\n", figurinha[numero+1]);
        }
    }
    else
    {
        if(figurinha[cont] == bubble(figurinha, cont, cont+1, numero))
        {
            if(figurinha[cont] % 2 == 0)
            {
                figurinha[numero] = figurinha[numero] - figurinha[cont];
            }
            else
            {
                figurinha[numero+1] = figurinha[numero+1] - figurinha[cont];
            }
        }
        return imprimir(figurinha, cont+1, numero);
    }
}
int main() {
    int numero;
    scanf("%d", &numero);
    int figurinha[numero];
    figurinha[numero] = 0;
    figurinha[numero+1] = 0;
    ler(figurinha, 0, numero, 0, 0);
    imprimir(figurinha, 0, numero);
	return 0;
}
