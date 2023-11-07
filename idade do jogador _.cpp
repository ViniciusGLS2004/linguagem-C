#include <stdio.h>

int main(){

    int i;
    
    printf("digite a idade do jogador: ");
    scanf("%d", &i);
    
    if(i >= 1 && i <= 10){
      printf("a sua categoria é infantil!");  
    }    
    else if(i >= 11 && i <= 17){
        printf("a sua categoria é juvenil");
    }
    else if (i >= 18){
        printf("a sua categoria é sénior");
    }
    else{
    printf("Sem Categoria");
    }
 
}
