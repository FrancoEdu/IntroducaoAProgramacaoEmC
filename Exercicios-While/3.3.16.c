/*
3.3.13Uma das primeiras aplicações de computadores foi o cálculo
de trajetória de projéteis. Se um projétil é atirado com uma
velocidade inicial V (m/s) a um ângulo de inclinação θ (radianos),
sua posição no plano vertical (x,y) no tempo t (segundos) é
calculada pelas fórmulas:
x=(Vcosθ)t
y=(Vsenθ)t - 1/2gt2
Faça um programa que, dados os parâmetros θ e V, liste as
coordenadas x e y em intervalos de 0.01 segundos para um tiro
em particular, terminando a listagem quando o projétil atingir o
solo.

*/

#include <stdio.h>
#include <math.h>

int main (){
	float Vel;
	float sen, cosseno;
	float x, y;
	float g = 9.8;
	float inicio, tempo;
	
	sen  = 0.8; //lançamento em 60graus
	cosseno = 0.5; //lançamento em 60graus
	inicio = 0.00; // variação do tempo
	
	printf("\n ----------------------- FISICA ----------------------- \n");
	printf("Digite a Velocidade de lancamento do projetil: ");
	scanf("%f", &Vel);
	
	printf("Digite a variacao de tempo de lancamento do projetil: ");
	scanf("%f", &tempo);
	
	while(inicio <= tempo){
		x = (Vel*cosseno)*inicio;
		y = (Vel*sen)*inicio-1/2*g*inicio*inicio;	
		printf("x = %.2f,y = %.2f em %.2f segundos \n", x, y, inicio);
		inicio = inicio + 0.01;
	}	
	
	return main();	
}