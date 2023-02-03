#include <stdio.h>

main(){
	
	int num,imp, c;
	
	printf("digite o numero: ");
	scanf("%d", &num);
	
	for (num=1;num<=20; num++){
		
	if(num%2==0){
	printf("os numeros pares sao:%d\n", num);
	}
	 imp=num+1;
	printf("os numeros impar sao:%d\n", imp);
	}
}

