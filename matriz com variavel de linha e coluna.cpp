#include <stdio.h>
#define m 4
#define n 3
int main(){
	
	int l, c;
	float matriz[m][n],somalinha[4],total;

 // capturando dados
 for (int l = 0; l < m; l++) { // para as linhas
 for (int c = 0; c < n; c++) { // para as colunas
 printf("matriz[%d][%d] = ", l, c);
 scanf("%d", &matriz[l][c]);
 }
 }
// imprimindo o conteudo da matriz
	for(l = 0; l<m; l++){ // para as linhas
	for(c = 0; c<n; c++){ // para as colunas
	printf("%4d", matriz[l][c]);
	}
	printf("\n");
	}
// soma das linha	
	
	
	
}
