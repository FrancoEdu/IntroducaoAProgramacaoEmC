/*
4.2.4Faça um programa que carregue um vetor de inteiros,
permitindo que o usuário defina a quantidade de elementos a
serem carregados. O usuário também deve digitar o valor de um
elemento o qual deseja saber quantos destes elementos existem
no vetor.
*/

#include <stdio.h>

int main(){
	
	int vetor[10];
	int valor,elemento, achouValor;
	
	for(elemento = 1; elemento <= 10; elemento++){
		printf("Digite o valor do %io elemento : ", elemento);
		scanf("%i", &vetor[elemento]);
	}
	
	printf("Qual numero deseja verificar se existe no vetor ?");
	scanf("%i", &valor);
	
	achouValor = 0;
	
	for(elemento = 1; elemento <= 10; elemento++){
		if(vetor[elemento] == valor){
			achouValor = achouValor + 1;
		}
	}
	
	if(achouValor >= 1)
		printf("Achamos %i vezes", achouValor);
	else
		printf("Nao achamos nada :(");
	
}