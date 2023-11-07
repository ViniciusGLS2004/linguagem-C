#include<stdio.h>

	int main() {
		
	float vendas, comissao;
	
	printf("digite o total de ganhos do vendedor");
	scanf("%f", &vendas);
	
	comissao = vendas*0.10;
	
	printf("a comissão do vendendor é:R$%.2f", comissao);
	
									
	}	
