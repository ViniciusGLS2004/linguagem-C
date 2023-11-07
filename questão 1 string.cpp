#include <stdio.h>
#include <string.h>
int main(){
	
	char nome[10];
	int qtd;
	
	printf("imforme o nome:\n ");
	gets(nome);
	
	qtd= strlen(nome);
	
	if(qtd%2 == 0){
		printf("%c e %c", nome[qtd/2-1], nome[qtd/2]);
		
	}
}
