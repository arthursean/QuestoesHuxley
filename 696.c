#include <stdio.h>
int scan(int a[], int cont)
{
    if (cont == 11)
    {
        return 0;
    }
    else
    {
        scanf("%d", &a[cont]);
        return scan(a, cont + 1);
    }
}
int imprimir(int a[], int cont, int valor)
{
    if (cont == 0)
    {
        printf("%d", valor);
        return 0;
    }
    else
    {
        if (a[cont - 1] == a[10])
        {
            return imprimir(a, cont - 1, valor + 1);
        }
        else
        {
            return imprimir(a, cont - 1, valor);
        }
    }
}
int main()
{
    int a[11];
    scan(a, 0);
    imprimir(a, 10, 0);
    return 0;
}
