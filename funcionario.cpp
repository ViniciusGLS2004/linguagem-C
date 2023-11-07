#include <stdio.h>

typedef struct Funcionario{
	char nome[50];
	float salario;
	
	
}funcionario;

int main(){
	
	int cad = 0;
	
	funcionario ator;
	for(cad=0;cad<6; cad++){
	
	printf("digite o seu nome:\n");
	scanf("%s", ator.nome);
	 
	printf("digite o seu salario:\n");
	scanf("%f",&ator.salario);
	
	printf("\no seu nome eh %s e o seu salario eh %f REAIS\n", ator.nome, ator.salario);
	
	}
	return 0;
}
