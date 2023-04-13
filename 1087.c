#include <stdio.h>
int conta(int n)
{
    if(n==100)
    {
        return 0;
    }
    else
    {
        printf("%d\n", n);
        return conta(n+1);
    }
}
int main() {
    int n = 0;
    conta(n);
	return 0;
}
