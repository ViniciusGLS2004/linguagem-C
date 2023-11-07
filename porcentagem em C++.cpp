#include <stdio.h>

int main(){
	
	float porc, acresc, desc, valor;
	
	printf("digite um valor: R$");
	scanf("%f", &valor);
			
	// calcular a porcentagem de 7,5%
	porc = valor * 0.075;
	printf("7,5%% de %.1f eh %.1f\n\n", valor, porc);
	
	// acrescentar 7,5% de um valor	
	acresc = valor * 1,075;
	printf("acrescimo de 7,5%% de %.1f eh %.1f\n\n", valor, acresc);
	
	// descontar 7,5% de um valor
	desc = valor * 0,925;
	printf("desconto de 7,5%% de %.1f eh %.1f\n\n", valor, desc);
}
