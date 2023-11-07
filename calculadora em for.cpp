#include <stdio.h>

int main(){
	
	int num,cont, result;
	
	printf("digite um numero 1 até 10: ");
	scanf("%d", &num);
	
	printf("digite o numero a ser multiplicado pelo numero escolhido: ");
	scanf("%d", &cont);
	
	for(cont=0; cont<=10; cont++){
	result=cont*num;	
	printf("%d X %d = %d\n", cont, num, result);
}
}
