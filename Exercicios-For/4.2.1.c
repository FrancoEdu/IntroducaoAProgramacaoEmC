/*
4.2.1Faça um programa que receba 5 valores inteiros em um
vetor e mostre na tela, os valores na ordem inversa.
*/

#include <stdio.h>

int main(){
	int num[5];
	int x;
	
	for(x=0; x<5; x++){
		printf("Digite o %io valor : ", x+1);
		scanf("%i", &num[x]);
	}
	
	printf("De tras para frente fica :");
	
	for(x=5; x>0; x--){
		printf("%i  ", num[x]);
	}
}
	