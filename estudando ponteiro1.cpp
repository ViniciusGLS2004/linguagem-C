#include <stdio.h>

int main(){

	// valor � a variavel que vai ser apontada pelo ponteiro
	int valor;
	
	//declara��o da variavel ponteiro
	int *prt;
	
	//atribuindo o endere�o da variavel valor ao ponteiro
	prt = &valor;
	
	printf("digite o numero do valor\n");
	scanf("%d", &valor);

	printf("o valor eh: %d\n", valor);
	printf("endereco da variavel valor: %x\n", &valor);
	printf("endero que o prt aponta: %x", prt);
	
	return 0;
}

