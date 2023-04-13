#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void valor(double arvore)
{
    double enfeite, preco;
    if(scanf("%lf", &enfeite)==EOF)
    {
        printf("%.2lf\n%.2lf\n", arvore, arvore/21);
        return;
    }
    else
    {
        scanf("%lf", &preco);
        arvore = arvore + preco*enfeite;
        valor(arvore);
    }
}
int main() 
{
    int arvore;
    scanf("%d", &arvore);
    valor(arvore);
	return 0;
}
