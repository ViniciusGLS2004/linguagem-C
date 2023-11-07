#include <stdio.h>
#include <stdlib.h>

void exibir_menu(){
	system("cls");
	printf("menu\n\n1 - domingo \n2 - segunda \n3 - terça \n4 - quarta \n5 - quinta \n6 - sexta \n7 - sabado \n8");
}

float clacular_desconto(float valor, int diaSemana){
	
	if(diaSemana==1) return valor;
	if(diaSemana%2 == 0) return valor*0.85;
	else return valor*0.9;
	
}
	bool verifica_numero(int numero){
		if (numero >= 1 && numero <= 7) return true;
		else return false;
	}
	
int main(){
	float venda;
	int dia;
	printf(" informe o valor da venda: ");
	scanf("%f
	", &venda);
	exibir_menu();
	
	do{
	scanf("%d", &dia);
	while(!verifica_numero(dia));
	}
	printf(" o valor total eh: %.2f", calcular_desconto(venda, dia));
	}

	

