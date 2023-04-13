#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculo(int cont, int capacidade, int saiu, int entrou, int pessoa)
{
    if (cont == 0)
    {
        printf("N");
        return 0;
    }
    else
    {
        scanf("%d%d", &saiu, &entrou);
        pessoa = pessoa-saiu + entrou;
        if (pessoa > capacidade)
        {
            printf("S");
            return 0;
        }
        else
        {
            return calculo(cont - 1, capacidade, saiu, entrou, pessoa);
        }
    }
}
int main()
{
    int capacidade, cont;
    scanf("%d%d", &cont, &capacidade);
    calculo(cont, capacidade, 0, 0, 0);
    return 0;
}
