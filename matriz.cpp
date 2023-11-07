#include <stdio.h>

int main(){
	int i, j;
	int matriz[4][3]= {{10 , 20 , 30},
 					   {50 , 60 , 9},
					   {90 , 11 , 22}, 
					   {40 , 80 , 33} };
					
	for(i=0; i<4; i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf("%d ", matriz[i][j]);
		}
	}					
}
