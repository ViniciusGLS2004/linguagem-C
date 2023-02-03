#include <stdio.h>

int main(){
	
	int ang1, ang2, ang3;
	
	printf("digite o primeiro angulo:\n");
	scanf("%d", &ang1);
	
	printf("digite o segundo angulo:\n");
	scanf("%d", &ang2);
	
	printf("digite o terceiro angulo:\n");
	scanf("%d", &ang3);
	
	if( ang1 == ang2 && ang1 == ang3){
		printf("o angulo eh equilatero");
	}
	else if(ang1 == ang2 && ang1 != ang3){
		printf("o angulo eh isosceles");
	}
	else if(ang1 != ang2 && ang1 != ang3){
		printf("o angulo eh escaleno");
	}
	else{
		printf(" o angulo eh invalido");
	}		
}
