#include <stdio.h>

int main(){
	
	float m, f;
	
	printf("digite a media do aluno:\n");
	scanf("%f", &m);
	printf("digite as faltas do aluno:\n");
	scanf("%f", &f);
	
	 if (f <= 40){
		if(m >= 6)
		printf("aprovado!");
		else
		printf("recuperaçao!");
	}
		else
		printf("reprovado!");
}
