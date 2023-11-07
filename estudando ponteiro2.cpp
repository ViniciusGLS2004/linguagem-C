#include <stdio.h>

int main(){
	
	int x, *ptrx, **pptrx;
	
	printf("digite o valor de x: ");
	scanf("%d", &x);
	
	printf("\no valor de x eh: %d\n", x);
	printf("\no endereco da variavel x eh: %x\n", &x);
	
	//Atribuindo os enderecos para os ponteiros
	ptrx = &x; // ptrx aponta para x
	pptrx = &ptrx;  // pptrx aponta para ptrx 
	
	*ptrx += 24;
	printf("\no valor de x eh: %d\n", x);
	printf("\no endereco de memoria da variavel eh: %x\n", &ptrx);
	printf("\no endereco apontado por ptrx eh: %x\n", ptrx);
	printf("\no valor da variavel x pelo ponteiro ptrx eh: %d\n", *ptrx);
	
	**pptrx += 58;
	printf("\no valor de x eh: %d\n", x);
	printf("\no endereco de memoria da variavel eh: %x\n", &pptrx);
	printf("\no endereco apontado por pptrx eh: %x\n", pptrx);
	printf("\no valor da variavel x pelo ponteiro pptr eh: %d\n", **pptrx);
}
