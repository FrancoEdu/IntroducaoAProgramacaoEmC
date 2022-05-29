/*
4.2.3Faça um programa que receba, em um vetor, 200 valores
inteiros, a partir do usuário. Após o carregamento, mostre para o
usuário apenas o conteúdo dos índices pares.
*/

#include <stdio.h>

int main(){
	
	int val[200];
	int i, par;
	
	for(i=1; i<201; i++){
		printf("Digite o %i o valor: ", i);
		scanf("%i", &val[i]);
	}
	
	i=1;
	while(i<201){
		if(i % 2 == 0){
			printf("Esse eh o conteudo do %i indice : %i \n",i,val[i]);
			i++;
		}else{
			i++;
		}
	}
	
}