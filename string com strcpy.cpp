#include <stdio.h>
#include <string.h>

int main(){
	
	char nome1[]="kratos";
	char nome2[]= "atreus";
	
	printf("o nome 1 eh: %s\n", nome1);
	
	strcpy(nome1,nome2);
	
	printf("o nome1 eh: %s\n", nome1);
}
