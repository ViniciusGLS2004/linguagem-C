#include <stdlib.h>
#include <stdio.h>
#include <iostream>


class Data {
public:
	int dia;
	int mes;
	int ano;

	 
	void print(){
		printf(" a data eh %d / %d/ %d",dia, mes, ano);
	}
};

int main(){	
	 Data minha_data;
	 Data *pData;
	 pData = &minha_data;
	pData -> dia = 16;
	pData -> mes = 12;
	pData -> ano = 2022;
	pData -> print();
	return 0;
}
