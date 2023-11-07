#include <stdio.h>
#include <string.h>

int main(){
	
	char nome1[15];
	char nome2[15];
	
	printf("digite o seu nome:\n");
	scanf("%s", &nome1);
	
	printf("o nome1 da pessoa eh: %s\n", nome1);
	
	strncpy(nome2,nome1,3);
	
	printf("o nome2 eh: %s\n", nome2);
}
