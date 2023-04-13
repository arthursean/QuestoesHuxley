#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double tarifa, valorFixo, valorPKm, kmRodados, salario;
    int vaiViajar;
    scanf("%lf%lf%lf%lf%d", &salario, &valorFixo, &valorPKm, &kmRodados, &vaiViajar);
    salario = salario * 0.3;
    if(vaiViajar==1)
    {   
        tarifa = (valorFixo + valorPKm * kmRodados)*1.10;
        if(salario-tarifa>=0)
        {
        printf("Vai poder viajar.\n%.2lf\n%.2lf", tarifa, salario-tarifa);
        }
        else
        {
            printf("N�o vai poder viajar.\n%.2lf", tarifa-salario);
        }
    }
    else if(vaiViajar==0)
    {   
        tarifa = (valorFixo + valorPKm * kmRodados);
        if(tarifa<=salario)
        {
            printf("Vai poder viajar.\n%.2lf\n%.2lf", tarifa, salario-tarifa);
        }
        else
        {
            printf("N�o vai poder viajar.\n%.2lf", tarifa-salario);
        }
    }
	return 0;
}
