#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void converterdolar (float dolar, float cotacao, char nome[], float x);

void converterdolar (float dolar, float cotacao, char nome[], float x){

	float real = dolar*cotacao;
	
	printf(" %s : %.1f dolares e igual a %.1f reais\n", nome, dolar, real);
	
	bool float x = real;
	
	if(x = real){
		printf("true");
	}else{
		printf("false");
	}
}
int main(){
	
converterdolar(300, 5.28, "vinicius gomes");

return 0;
}
