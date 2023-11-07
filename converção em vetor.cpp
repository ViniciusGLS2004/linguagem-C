#include <stdio.h>

main(){
	
	float a, b, c;
	float temp[5];
	
	for(a=0;a<5;a++){
		printf("informe as temperaturas em farenheit\n");
		scanf("%f", &temp[5]);
		c = (temp[5] - 32)*5/9;
			printf("a conversao de fare para celcius eh: %.1f\n\n", c);
	}
}

