#include <stdio.h>
#include <stdlib.h>
#include <locale.h>	

void sda(){
	int num;
	
	printf("digite a situa��o da turma:\n");
	scanf("%d", &num);
	
		switch(num)
	{
	case 1:
		printf(" A turma esta aprovada!\n");
		break;
		
	case 2:
		printf("A turma repetira!\n");
		break;
		
	case 3:
		printf("A turma est� reprovada\n");
		break;
		
	default:
		printf("N�mero invalido");
		break;	
	}
}
	
int main(){
	
		setlocale (LC_ALL,"portuguese");

	float notas[3];
	float soma;
	float media;
	int c = 0;
	
	printf("Notas dos Alunos\n\n");
	
	for(c=0;c<3;c++){
	
	printf("digite a nota do aluno:\n");
	scanf("%f", &notas[c]);
	
	printf("a nota do aluno �:%f\n", notas[c]);
	
	soma = soma + notas[c];
}

	printf("a soma das notas �: %.2f\n", soma);
	
	media = soma/3;
	
	printf("a media da turma �:%f\n", media);

	sda();
}

