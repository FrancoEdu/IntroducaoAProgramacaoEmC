/* -----------------------------------------------------------------
6.1.3 Faça um programa em C que receba do usuário uma matriz NxM 
(N é o número de linhas e M o número de colunas) de
números inteiros, e armazene na linha N-1 o somatório dos
elementos de cada coluna (linhas de 0 a N-2). Exibir os
resultados. Como exemplo, considere a matriz 4 x 2 a seguir. A
última linha conterá o somatório das linhas anteriores. Ex.:
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
