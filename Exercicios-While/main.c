#include <stdio.h>

/**************************************************************************************************************
3.3.7 Faça um programa que calcule e mostre o quadrado de um número N  inteiro positivo, digitado pelo usuário. 
    O cálculo deve ser feito através da soma dos N primeiros números ímpares. 
    Ex.: Se N=3 o programa calculará 1+3+5=9, que é o quadrado de 3.
***************************************************************************************************************/

int main(){
    int num, contador, resultado, contaImpar;
    
    printf("Digite um numero: ");
    scanf("%i", &num);
    
    resultado = num * num;
    
    printf("Seu quadrado eh igual a: %i \n", resultado);
    
    contaImpar = 1;
    contador = 1;
        
    while(contador <= resultado && contaImpar <= num){
        
        if(contador % 2 == 0)
            contador = contador + 1;
        else{
            printf("%i \n", contador);
            contador = contador + 1;
            contaImpar = contaImpar + 1;
        }
    }
    
}
