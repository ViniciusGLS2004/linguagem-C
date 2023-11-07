#include <stdio.h>
#include <string.h>
int main(){
	
	char teste[50] = "alan do santos";
	int i;
	int cont=0;
	
	for(i=0;teste[i] != '\0';i++){
		
		printf("o nome do elemento %d eh: %c\n",i, teste[i]);
		cont++;
	}
	printf("o numedo de caracteres eh: %d\n", cont);
		printf("o numedo de caracteres usando strlen eh: %d\n", strlen(teste));

}

