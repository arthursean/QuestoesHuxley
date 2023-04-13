#include <stdio.h>

int ler(double dificuldade[], int contAno, int cont, int quantidade, double valor)
{
    if (cont == quantidade)
    {
        return 0;
    }
    else
    {
        if (contAno > 3)
        {
            if (valor < 45)
            {
                valor = 45;
            }
            dificuldade[cont] = valor;
            return ler(dificuldade, 0, cont + 1, quantidade, valor);
        }
        if (contAno == 0)
        {
            scanf("%lf", &dificuldade[cont]);
            scanf("%lf", &valor);
            if (valor <= 45)
            {
                dificuldade[cont] = valor;
                return ler(dificuldade, 0, cont + 1, quantidade, valor);
            }
            return ler(dificuldade, contAno + 1, cont, quantidade, valor);
        }
        if (dificuldade[cont] == 0)
        {
            if (valor <= 100)
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * (0.25 / 2));
            }
            else
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * 0.25);
            }
        }
        if (dificuldade[cont] == 1)
        {
            if (valor <= 100)
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * (0.2 / 2));
            }
            else
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * 0.2);
            }
        }
        if (dificuldade[cont] == 2)
        {
            if (valor <= 100)
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * (0.18 / 2));
            }
            else
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * 0.18);
            }
        }
        if (dificuldade[cont] == 3)
        {
            if (valor <= 100)
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * (0.15 / 2));
            }
            else
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * 0.15);
            }
        }
        if (dificuldade[cont] == 4)
        {
            if (valor <= 100)
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * (0.12 / 2));
            }
            else
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * 0.12);
            }
        }
        if (dificuldade[cont] == 5)
        {
            if (valor <= 100)
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * (0.1 / 2));
            }
            else
            {
                return ler(dificuldade, contAno + 1, cont, quantidade, valor - valor * 0.1);
            }
        }
    }
}
int imprimir(double dificuldade[], int cont, int quantidade)
{
    if (cont == quantidade)
    {
        return 0;
    }
    else
    {
        printf("Jogo[%d] = R$%.2lf\n", cont, dificuldade[cont]);
        return imprimir(dificuldade, cont + 1, quantidade);
    }
}
int main()
{
    int quantidade;
    scanf("%d", &quantidade);
    double dificuldade[quantidade];
    ler(dificuldade, 0, 0, quantidade, 0);
    imprimir(dificuldade, 0, quantidade);
}
