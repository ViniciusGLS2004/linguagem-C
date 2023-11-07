#include <stdio.h>

 main(){
	
	char op;
	float num1, num2, valor;
	
	printf(" digite o numero 1: ");
	scanf("%f", &num1);
	
	fflush(stdin);
	printf(" insira o operador: \n");
	scanf("%c", &op);

	printf("digite o numero 2: ");
	scanf("%f", &num2);
		
	switch(op){
		case '+':
		valor= num1 + num2;
		printf("a soma dos valores é: %.2f", valor);
		break;
		
			case '-':
		valor= num1 - num2;
		printf("a soma dos valores é: %.2f", valor);
		break;
		
			case '*':
		valor= num1 * num2;
		printf("a soma dos valores é: %.2f", valor);
		break;
		
			case '/':
		valor= num1 / num2;
		printf("a soma dos valores é: %.2f", valor);
		break;								
	}
		
}
