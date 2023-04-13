#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int maior)
{
    int a;
    scanf("%d", &a);
    if(a == 0)
    {
        printf("%d", maior);
        return 0;
    }
    else
    {
        if(maior<a)
        {
            maior = a;
            return main(maior);
        }
        return main(maior);
    }
}
