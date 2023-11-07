#include <stdio.h>

int main(){
	
	float a, soma, media;
	float vet[5];
	
	for(a=0;a<5;a++){	
		printf("digite as notas:\n");
		scanf("%f", &vet[5]);
		soma += vet[5];
		media= soma/5;
}
	printf("a soma das notas eh:%f ", soma);
	printf("a media dos alunos eh: %.2f", media);
}
