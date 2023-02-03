#include <stdio.h>

int main(){
	
	int salario, valorhora, horamensal;
	
	printf( "digite o salario mensal do funcionario\n");
	scanf("%d", &salario);
	
	printf("digite a hora mensal do funcionario\n");
	scanf("%d", &horamensal);
	
	valorhora = salario / horamensal;
	
	printf("o valor por hora é: %.1d\n", valorhora);
}
