#include<stdio.h>

int main() {
	
	float n1, n2, media;
	
	printf("digite um numero real\n");
	scanf("%f", &n1);
	
	printf("digite um numero real\n");
	scanf("%f", &n2);
	
	media=n1+n2;
	
	
	 if ( media >= 7.0) {
		printf("aprovado(a)!");	
     }  else { 
		printf("reprovado(a)!");	
	}
} 
