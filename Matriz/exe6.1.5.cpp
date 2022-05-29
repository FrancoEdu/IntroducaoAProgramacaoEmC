/******************************************************************************
6.1.5 Preencha uma matriz quadrada de ordem 4, da seguinte
forma:
*******************************************************************************/
#include <stdio.h>

int main()
{
    int ordem;
    
    printf("Quantas linhas e colunas tera sua matriz ?");
    scanf("%i", &ordem);
    
    int matriz[ordem][ordem];
    
    for(int l = 0; l < ordem; l++){
        for(int c = 0; c < ordem; c++){
            if(l==c){
                printf("| 1 |");
            }
            else
                printf("| 0 |");
        }
        printf("\n");
    }
}
