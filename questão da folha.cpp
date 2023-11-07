#include <stdio.h>

main(){
	
	int folhas;
	float custo;

	printf("quantas folhas?: ");
	scanf("%d", &folhas);
	
	printf("quao o custo?: ");
	scanf("%f", &custo);
	
	if(folhas <= 100){
		printf("o custo vai ser R$0.25");
	}
	else{
		folhas=folhas*custo;
		printf("o custo vai ser: %.2d", folhas);
	}
}
