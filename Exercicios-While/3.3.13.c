/*
3.3.13 Calcule a expressão, sem utilizar a função pow() da math.h:
Onde: X e Y são digitados pelo usuário
*/
#include <stdio.h>

int main(){
	int base, expoente, contador, resultado;
	
	printf("--- APRENDENDO POTENCIACAO --- \n");

	printf("Digite a o numero da base: ");
	scanf("%i", &base);
	printf("Agora, digite o expoente : ");
	scanf("%i", &expoente);
	
	contador = 1;
	
	resultado = 1;
	
	while(contador <= expoente){
		resultado = resultado * base;
		printf("%i \n", resultado);
		contador = contador + 1;
	}
}
