#include <stdio.h>
#include <stdlib.h>

typedef struct filme{
	char nome[50],genero[50], diretor[50];
	int ano, codigo;
	
}movie;

	void cadastrasse(movie *filme, int codigo);
	void exibir_filme(movie *filmes);
	bool excluir_filme(movie *filmes);
	void menu();
	void exibir_filmes(movie *filmes);

int main(){
	int opcao;
	int max = 0;
	movie avatar;
	

do{
	menu();	
	scanf ("%d", &opcao);
	
	switch(opcao){
		case 1:
			if(max < 10){
					cadastrasse(&avatar[max], max );
					max++;
				}
				else{
					printf ("\n\nO volume máximo de filmes cadastrados foi atingido.\n\n");
					system("pause");
				}
			break;
		case 2:
		    exibir_filme(&avatar);
		    break;
////////////////////////		
	}
}while(opcao != 3);
	
		return 0;
}
	
void menu(){
	system("cls");
	printf("MENU\n\n");
	printf("    1 - cadastrasse\n");
	printf("    2 - exibir\n");
	printf("    3 - excluir\n");	
	printf("Escolha uma opcao: ");
}

void cadastrasse(movie *filme, int codigo){
	system("cls");
	fflush(stdin);

	
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
	system("cls");
	printf("Nome: ");
	puts (filmes->nome);
	printf("genero: ");
	puts (filmes->genero);	
	printf("diretor: ");
	puts (filmes->diretor);		
	printf("ano: %d\n", filmes->ano);
	printf("codigo: %d\n", filmes->codigo);
	system("pause");
}
