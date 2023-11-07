#include <stdio.h>

int main(){
	
	int a = 10;
	
	printf("o resto da divisao inteira %d\n", a % 2);

	if (a % 2 == 0){
		printf("é par!");
	}  else {
		printf("é impar!");		
	}
}
