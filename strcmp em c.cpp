#include <stdio.h>
#include <string.h>

int main(){

    char str1[]="curso do c";
    char str2[]="curso de java";
    int retorno;
    
    retorno = strncmp(str1,str2,8);
    
    /*
        0: o conteúdo das strings é igual
        <0: o conteúdo da str1 é menor doque a str2
        >0: o conteúdo da str1 é maior doque a str2
    */
    printf("retorno eh = %d\n", retorno);
}