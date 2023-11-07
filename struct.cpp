#include <stdio.h>

	typedef struct materia{
 		char nome[30];
		char professor[30];
		int ch;
		int nota;
	} tipo_materia;
	
	struct aluno{
		char nome;
		char materia[5]; 
	};
	
int main(){
		
	while(tipo_materia<5){
	
	tipo_materia disciplina;
	printf("digite o nome da disciplina: ");
	gets(disciplina.nome);
	
	printf("imforme o nome do professor: ");
	scanf("%s", &disciplina.professor);
	
	printf("imforme a carga horaria da disciplina: ");
	scanf("%d", &disciplina.ch);
	
	printf("digite a nota disciplina");
	scanf("%d", &disciplina.nota);
	
	printf("\n\nO nome da disciplina eh: %s, o nome do professor eh %s, a sua carga horaria eh %d e a sua nota eh %d", disciplina.nome, disciplina.professor, disciplina.ch, disciplina.nota);
	materia[0]++;
}
}
		
