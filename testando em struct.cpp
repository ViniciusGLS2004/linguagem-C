#include <stdio.h>

	struct testando{ // struct fica em cima do main
					// imformações no struct
	char nome[50]; 
	char rua[50];
	int idade, numero, soma;
};

int main(){
	
		struct testando teste1, teste2; // mesta instrução mas é repetida
		
		printf("digite o seu nome:\n");
		gets(teste1.nome);
		
		printf("digite o nome da sua rua:\n");
		gets(teste1.rua);
		
		printf("digite a sua idade:\n");
		scanf("%d", &teste1.idade);
		
		scanf("%d", &teste1.numero);
		teste1.soma= teste1.numero + teste1.idade;
		
		
		printf("\n\no seu nome eh %s, a sua rua eh %s e sua idade eh %d, a sua soma eh %d", teste1.nome, teste1.rua, teste1.idade, teste1.soma);
		
		printf("digite o seu nome:\n");
		gets(teste2.nome);
		
		printf("digite o nome da sua rua:\n");
		gets(teste2.rua);
		
		printf("digite a sua idade:\n");
		scanf("%d", &teste2.idade);
		
		scanf("%d", &teste2.numero);
		
		teste2.soma= teste2.numero - teste2.idade;
		
		printf("\n\no seu nome eh %s, a sua rua eh %s e sua idade eh %d, a sua soma eh %d", teste2.nome, teste2.rua, teste2.idade, teste2.soma);
		
		}
	
