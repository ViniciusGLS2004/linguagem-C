#include <stdio.h>

int main(){
	
	int a, b, soma=0;
	int vet[b];
	
	printf("digite o numero de espaços: ");
	scanf("%d", &b);
	
	for(a=0;a<b;a++){
		printf("imforme o numero: ");
		scanf("%d", &vet[b]);
		soma += vet[b];
	}
	printf("a soma dos numeros eh: %d", soma);
}
