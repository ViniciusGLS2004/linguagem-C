#include <stdio.h>

main(){
	
	float contador= 1, nota, soma, media;
	
	while(contador<=3){
		printf("digite as notas dos tres alunos:\n", nota);
		scanf("%f", &nota);
		contador++;
		
	soma=soma+nota;
	media=soma/3;
	}
	printf("a media dos alunos é:%f", media);

}
