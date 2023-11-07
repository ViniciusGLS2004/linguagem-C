#include <stdio.h>

int main(){

float h, s, d;

    printf("quantas horas: ");
    scanf("%f", &h);
    
    s = 19.50 * h;
    
    if(s > 2500 ){
    d = s * 0.25;
    s = s - d;
    printf("o salário vai ser: %.2f", s); 
    } 
    else{
    printf("salário é:%.2f", s);  
}
}