#include <stdio.h>
#include <string.h>
#define chave "abracadabra"
main(){
	
	char senha[20];
	do{
	
	printf("digite a senha\n");
	gets(senha);
		
	if(strcmp(senha,chave)==0){
		printf("senha correta");
	
	} else{
		
		printf("digite a senha novamente\n");
	}
}while(strcmp(senha,chave)!= 0);
return 0;
}
