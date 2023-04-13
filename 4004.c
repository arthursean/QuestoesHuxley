#include <stdio.h>

int main()
{
    int estiloP, estiloS;
    double fator;
    scanf("%d %d %lf", &estiloP, &estiloS, &fator);
    if (estiloP == 1)
    {
        if (estiloS == 1)
        {
            printf("Aumenta mais!\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^");
            }
            else
            {
                printf("=D");
            }
        }
        else if (estiloS == 2)
        {
            printf("Legal\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^");
            }
            else
            {
                printf("=D");
            }
        }
    }
    else if (estiloP == 2)
    {
        if (estiloS == 1)
        {
            printf("Essa eh punk\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^");
            }
            else
            {
                printf("=D");
            }
        }
        else if (estiloS == 2)
        {
            printf("Hoje eu choro\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^");
            }
            else
            {
                printf("=D");
            }
        }
    }
    else if (estiloP == 3)
    {
        if (estiloS == 1)
        {
            printf("Aumenta mais!\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^");
            }
            else
            {
                printf("=D");
            }
        }
        else if (estiloS == 2)
        {
            printf("Legal\n");
            if (fator >= 1 && fator <= 4)
            {
                printf(":'(");
            }
            else if (fator > 4 && fator <= 7)
            {
                printf("^_^");
            }
            else
            {
                printf("=D");
            }
        }
    }
    return 0;
}
