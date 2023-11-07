#include <stdio.h>

main(){
	
	int N, resultado, contador=0;
	
		printf("digite o numero a multiplicado:\n");
		scanf("%d", &N);
		
	while(contador<=3){	
		resultado=N*contador;
		printf("%d X %d = %d", N, contador, resultado);
		contador++;
		}
}
