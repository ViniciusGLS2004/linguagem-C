#include <stdio.h>
#include <stdlib.h>

typedef struct filme{
	char nome[50],genero[50], diretor[50];
	int ano, codigo;
	
}movie;

	void cadastrasse(movie *filme);
	void exibir_filme(movie *filmes);
	bool excluir_filme(int codigo, movie *filmes);
	void menu();
	void exibir_filmes(movie *filmes);

int main(){
	int opcao;
	movie avatar;

	menu();	
	scanf ("%d", &opcao);
	
	if(opcao = 1){
		cadastrasse(&avatar);
	
	}else if(opcao = 2){
		exibir_filme(&avatar);
	
	}
	
		return 0;
}
	
void menu(){
	printf("MENU\n\n");
	printf("    1 - cadastrasse\n");
	printf("    2 - exibir\n");
	printf("    3 - excluir\n");	
	printf("Escolha uma opcao: ");
}

void cadastrasse(movie *filme){

	printf("digite o nome do filme:\n ");
	gets((*filme).nome);
	
	printf("digite o genero do filme:\n ");
	gets((*filme).genero);
	
	printf("digite o diretor do filme:\n ");
	gets((*filme).diretor);
	
	printf("digite o ano do filme:\n ");
	scanf("%d", &(*filme).ano);
	
	printf("digite o codigo do filme:\n ");
	scanf("%d", &(*filme).codigo);	
}

void exibir_filme(movie *filmes){
	
	printf("Nome: ");
	puts (filmes->nome);
	printf("Nome: ");
	puts (filmes->genero);	
	printf("Nome: ");
	puts (filmes->diretor);		
	printf("\nano: %d\n\n", filmes->ano);
	printf("\ncodigo: %d\n\n", filmes->codigo);
		
}

