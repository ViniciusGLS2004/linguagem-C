#include <stdio.h>
#include <string.h>

int main(){

    char str1[8];
    char str2[8];
    int idade;
    
    printf("digite o seu nome\n");
    scanf("%s", &str1[8]);
    
    printf("digite o seu sobrenome\n");
    scanf("%s", &str2[8]);
    
    printf("digite a dua idade\n");
    scanf("%d", &idade);
    
    printf("o seu nome eh %s%s e dia idade eh %d\n ", str1[10], str2[10], idade);
}