#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	
	char nomes[10][50];
	float notas[5][3];
	float medias[5];
	float acumula;	
	int i, j;
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0; i<5; i++){
		printf("\n\n imforme o nome do aluno: ");
		fflush(stdin);
		gets(nomes[i]);
		j=0;
		acumula = 0;
		for(j=0; j<3; j++){
			printf("imforme uma nota: ");
			scanf("%f", &notas[i][j]);
			acumula += notas[i][j];
		}	
			medias[i] = acumula /3;
	}

	for(i=0; i<5; i++){
		printf("\n\n%s", nomes[1]);
		for(j=0; j<3; j++){
			printf("\nAv %d - %f", (j+1), notas[i][j]);
		}
		printf("\n medias - %f", medias[i]);
		if(medias[i] >= 7){
			printf("\nsituação - aprovado");
		} else{
			printf("\nsituação - reprovado");
		}
		
		
		}
	}
	
	
