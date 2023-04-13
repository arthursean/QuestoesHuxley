#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int a, int b, int num, int cont)
{   
    if(num>=50)
    {
        printf("%d", cont);
        return 0;
    }
    else if(num % a == 0 && num % b == 0)
    {
        return func(a, b, num+1, cont+1);
    }
    else
    {
        return func(a, b, num+1, cont);
    }
}
int main() 
{
    int a, b;
    scanf("%d%d", &a, &b);
    func(a, b, 1, 0);
	return 0;
}
