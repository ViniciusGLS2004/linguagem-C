#include <stdio.h>

int main(){
	
	float n1, n2, m;
	
	printf("digite a primeira nota:\n");
	scanf("%f", &n1);
	
	printf("digite a segunda nota:\n");
	scanf("%f", &n2);
	
	m=n1+n2;
	
	 if (m >= 7){
		printf("aprovado(a)!");	
    } else { 
		printf("reprovado(a)!");	
	}
}
