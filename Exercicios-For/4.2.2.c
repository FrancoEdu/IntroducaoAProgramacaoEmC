/*
4.2.2Faça um programa que receba as notas de 10 alunos de uma
classe em um vetor e mostre a média das notas.
*/

#include <stdio.h>

int main(){
	float alunos[10], media, soma=0;
	int i;
	
	for(i=1; i<11; i++){
		printf("Digite  a nota do %i aluno :",i);
		scanf("%.2f \n",&alunos[i]);
		soma = soma + alunos[i];
	}
	media = soma/i;
	printf("\n A media da sala eh: %.2f ", media);
}