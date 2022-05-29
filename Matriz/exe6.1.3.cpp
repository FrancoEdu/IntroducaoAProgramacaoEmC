/* -----------------------------------------------------------------
6.1.3 Fa�a um programa em C que receba do usu�rio uma matriz NxM 
(N � o n�mero de linhas e M o n�mero de colunas) de
n�meros inteiros, e armazene na linha N-1 o somat�rio dos
elementos de cada coluna (linhas de 0 a N-2). Exibir os
resultados. Como exemplo, considere a matriz 4 x 2 a seguir. A
�ltima linha conter� o somat�rio das linhas anteriores. Ex.:
--------------------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int linha, coluna, total;
     
    printf("Quantas linhas tera sua matriz ?");
    scanf("%i", &linha);
    
    printf("Quantas colunas tera sua matriz ?");
    scanf("%i", &coluna);
    
    int matriz[linha][coluna];
    int somaColuna[coluna];
    
    for(int l = 0; l < linha; l++){
        for(int c = 0; c < coluna; c++){
            printf("Digite o valor %i,%i da posicao :", l,c);
            scanf("%i", &matriz[l][c]);
        }
    }
    
    for(int l = 0; l < linha; l++){
       for(int c = 0; c < coluna; c++){
           printf("|%i|", matriz[l][c]);     
       }
       printf("\n");
	}
	
	printf("A soma das colunas eh respectivamente : \n");
	
	for(int c = 0; c < coluna; c++){
        total = 0;
        for(int l = 0; l < linha; l++){
            total = total + matriz[l][c];
        }
        somaColuna[c] = total;
        printf("|%i|", total);
    }
    printf("\n");
	
	return main();
}
