#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int cont = 0;
	float nota[3];
	float soma;
	float media;
	
	for(cont=0;cont<3;cont++){
	
	printf("digite as notas dos alunos:\n ");
	scanf("%f", &nota[cont]);
	
	printf("as notas dos alunos são: %.1f\n", nota[cont]);
	
	soma = soma +nota[cont];
	
}
	printf("a soma das notas é: %.2f\n", soma);	
	
	media = soma/3;
	
	printf(" a media da turma é: %.2f\n\n", media);


	if(media > 7,0){
		printf("TURMA APROVADA!");
	} else{
		printf("TURMA REPROVADA!");
	}
}
