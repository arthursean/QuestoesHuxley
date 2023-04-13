#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int euclides(int num1, int num2)
{
    if (num1 % num2 == 0)
    {
        if (num2 == 1)
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
        return euclides(num2, (num1 % num2));
    }
}

int primo(int cont_j, int i, int div)
{
    if (i > cont_j)
    {
        if (div == 2)
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
        if (cont_j % i == 0)
        {
            return primo(cont_j, i + 1, div + 1);
        }
        else
        {
            return primo(cont_j, i + 1, div);
        }
    }
}

int fatorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        a = a * fatorial(a-1);
        return a;
    }
}

int par(int a)
{
    if (a % 2 == 0 && a != 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int jogada(int cont_j, int cont_r, int rodada, double pontosNosredna, double pontosOrdep)
{
    double a;
    if (cont_r > rodada)
    {
        printf("Total Nosredna = %.2lf\n", pontosNosredna);
        printf("Total Ordep = %.2lf\n", pontosOrdep);
        if (pontosOrdep > pontosNosredna)
        {
            printf("Ordep foi o campeao!\n");
            return 0;
        }
        else
        {
            printf("Nosredna foi o campeao!\n");
            return 0;
        }
    }
    if (cont_j < 6)
    {
        scanf("%lf", &a);
        if (euclides(cont_j, cont_r) == 1)
        {
            a = 0;
        }
        else if (par(a) == 1)
        {
            a = a * 1.15;
        }
        pontosNosredna = pontosNosredna + a;
        return jogada(cont_j + 1, cont_r, rodada, pontosNosredna, pontosOrdep);
    }
    else if (cont_j >= 6 && cont_j <= 10)
    {
        scanf("%lf", &a);
        if (primo(cont_j - 5, 1, 0) == 1)
        {
            a = 0;
        }
        else if (fatorial(a)%3 == 0)
        {
            a = a * 1.10;
        }
        pontosOrdep = pontosOrdep + a;
        return jogada(cont_j + 1, cont_r, rodada, pontosNosredna, pontosOrdep);
    }
    else
    {
        return jogada(1, cont_r + 1, rodada, pontosNosredna, pontosOrdep);
    }
}

int main()
{
    int rodadas;
    scanf("%d", &rodadas);
    jogada(1, 1, rodadas, 0, 0);
    return 0;
}
