/* -----------------------------------------------------------------
	6.1.2 Faça um programa que mostre o menor valor de uma
	matriz. Receba os valores e a ordem da matriz, a partir do
	usuário.
--------------------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int ordem, menor, maior;
    
    printf("Quantas linhas e colunas tera sua matriz ?");
    scanf("%i", &ordem);
    
    int matriz[ordem][ordem];
    
    menor = matriz[0][0];
    
    for(int l = 0; l < ordem; l++){
        for(int c = 0; c < ordem; c++){
            printf("Digite o valor %i,%i da posicao :", l,c);
            scanf("%i", &matriz[l][c]);
        
			if(matriz[l][c]<menor){
            		menor = matriz[l][c];
			}
        }
    }
    printf("O menor valor eh: %i", menor);
    
}
