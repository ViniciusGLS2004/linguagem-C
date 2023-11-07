#include <stdio.h>

int main(){

	// valor é a variavel que vai ser apontada pelo ponteiro
	int valor;
	
	//declaração da variavel ponteiro
	int *prt;
	
	//atribuindo o endereço da variavel valor ao ponteiro
	prt = &valor;
	
	printf("digite o numero do valor\n");
	scanf("%d", &valor);

	printf("o valor eh: %d\n", valor);
	printf("endereco da variavel valor: %x\n", &valor);
	printf("endero que o prt aponta: %x", prt);
	
	return 0;
}

