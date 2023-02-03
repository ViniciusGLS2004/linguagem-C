#include <stdio.h>

main(){
	
	float id, cont, qtde_idades, soma, media;
	
	printf("digite a quantida de alunos: ");
	scanf("%f", &qtde_idades);
	
	for(cont=1;cont<=qtde_idades;cont++){
		printf("digite as idades dos 23 alunos:\n");
		scanf("%f", &id);
			soma=soma+id;
			media=soma/qtde_idades;		
	}
	
	printf("a media eh:%.2f", media);
	
}
