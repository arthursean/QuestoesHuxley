#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int numLinha, numColuna, posicaoX, posicaoY, quantidadeMovimento;
    scanf("%d", &numLinha);
    scanf("%d", &numColuna);
    int mapa[numLinha][numColuna];
    for(int i = 0; i < numLinha; i++)
    {
        for(int j = 0; j < numColuna; j++)
        {
            scanf("%d", &mapa[i][j]);
        }
    }
	scanf("%d\n", &quantidadeMovimento);
	char movimento[quantidadeMovimento+1];
	for(int i = 0; i < quantidadeMovimento; i++)
	{
	    scanf("%c\n", &movimento[i]);   
	}
	scanf("%d %d", &posicaoX, &posicaoY);
	for(int i = 0; i < quantidadeMovimento; i++)
	{
	
	    if(movimento[i] == 'C' && mapa[posicaoX-1][posicaoY] == 1)
	    {
	        posicaoX-=1;
	    }
	    if(movimento[i] == 'B' && mapa[posicaoX+1][posicaoY] == 1)
	    {
	        posicaoX+=1;
	     
	    }
	    if(movimento[i] == 'E' && mapa[posicaoX][posicaoY - 1] == 1)
	    {
	        posicaoY-=1;
	    }
	    if(movimento[i] == 'D' && mapa[posicaoX][posicaoY + 1] == 1)
	    {
	        posicaoY+=1;
	    }
	}
	if(posicaoX>numLinha-1)
	{
	    posicaoX = numLinha-1;
	}
	if(posicaoY>numColuna-1)
	{
	    posicaoY = numColuna-1;
	}
	if(posicaoX < 0)
	{
	    posicaoX = 0;
	}
	if(posicaoY < 0)
	{
	    posicaoY = 0;
	}
	printf("(%d,%d)", posicaoX, posicaoY);
	return 0;
}
