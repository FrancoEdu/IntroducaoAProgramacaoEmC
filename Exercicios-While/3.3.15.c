/*
3.3.15A seqüência de Fibonacci segue a seguinte ordem:
0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89 , ...
Repare que cada termo é a somatória dos dois anteriores, sendo
que os dois primeiros são 0 (zero) e o 1 (um). Faça um programa
que receba um valor do usuário e imprima os termos da seqüência
de Fibonacci menores que o valor digitado
*/
#include <stdio.h>

int main(){
	int atual, anterior, num, fib;
	
	printf("Digite um numero : ");
	scanf("%i", &num);
	
	fib = 1;
	atual = 1;
	anterior = 0;
	
	while(fib <= num){
		fib = atual + anterior;
		anterior = atual;
		atual = fib;
		printf("%i \n", anterior);
	}	
}