#include <stdio.h>

int main(){

    char s;
    
    printf("digite o seus sexo\n");
    scanf("%c", &s);
    
    switch(s){
        case 'M':
        printf("o sexo é  masculino!\n");
        break;
        
        case 'F':
        printf("o sexo é feminino!\n");
        break;
        
        default:
        printf("sexo inválido!\n");
        break;
}
}