/*
3.3.10Faça um programa que calcule o fatorial de qualquer
número digitado pelo usuário, sabendo que o fatorial de um
número é o produtório dos números inteiros entre 1 e ele mesmo.
*/

#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um numero a ser fatoriado: ");
    scanf("%i", &num);
    
    int contador = 1;
    int fatorial = 1;
    
    while(contador <= num){
        fatorial = fatorial * contador;
        contador = contador + 1;
        printf("%i \n", fatorial);
    }
}