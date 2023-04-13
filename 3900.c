#include <stdio.h>
int questao(num, valor)
{
    valor = num%10;
    if(num==0)
    {
        printf("\n");
        return 0;
    }
    else
    {
        if(valor%2!=0)
        {
            printf("-");
            return questao(num/10, valor = 0);
        }
        else
        {
            printf(".");
            return questao(num/10, valor=0); 
        }
    }
}
int contagem(pedido, contador)
{
    int num, valor;
    valor = 0;
    if(contador<10)
    {   
        scanf("%d" , &num);
        questao(num, valor);
        return contagem(pedido, contador+1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int pedido, contador;
    pedido = 10;
    contador = 0;
    contagem(pedido, contador);
    return 0;
}
