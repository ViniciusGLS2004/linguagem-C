#include <stdio.h>

int main(){
	
	int a,b, maior;
	int vet[10];
	
	for(a=0;a<10;a++){
		printf("digite o valor do vetor: ");
		scanf("%d", &vet[a]);
}
	maior = vet[0];
	for(b=0;b<10;b++){
	if(vet[b]>maior){	
	maior=vet[b];	
	}		
}	
printf("o maior numero eh: %d", maior);	
}
