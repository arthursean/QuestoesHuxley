#include <stdio.h>
void bubble(int n[], int cont, int tamanho)
{
    if(cont<tamanho-1)
    {
        if(n[cont]>n[cont+1])
        {
            int aux=n[cont];
            n[cont]=n[cont+1];
            n[cont+1]=aux;
        }
        bubble(n, cont+1, tamanho);
    }
}
void ordenar(int n[], int cont, int tamanho)
{
    if(cont<tamanho-1)
    {
        bubble(n, cont, tamanho);
        ordenar(n, cont, tamanho-1);
    }
}
int main() {
    int n[3];
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    ordenar(n, 0, 3);
    printf("%d\n%d\n%d", n[0], n[1], n[2]);
    return 0;
