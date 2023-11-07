#include <stdio.h>
#define M 5
#define N 4

 int main()
 {
 int i, j;	
 char nomes[5][20];
 int matriz[M][N], somanota[5], total, media;

 	for(i=0; i<5; i++){ // laçao apenas para a coluna e linha dos 5 nomes
 	for(j=0; j<1; j++){
	 
		printf("imforme o nome: ");
		gets(nomes[i]); // capturando dados(nomes)
}

}
 
 // capturando dados
 for ( i = 0; i <5 ; i++) { // para as linhas
 for ( j = 1; j <4 ; j++) { // para as colunas
 printf("matriz[%d][%d] = ", i, j);
 scanf("%d", &matriz[i][j]);
 }
 
 }

 // imprimindo o conteudo da matriz
 	for(i=0; i<5; i++){
 		printf("\n");
		puts(nomes[i]);
 for ( i = 0; i < 5; i++) { // para as linhas
 for ( j = 1; j < 4; j++) { // para as colunas
 printf("%3d ", matriz[i][j]);
 }
 printf("\n");
 }
}
 
 // soma da linha
for(i=0; i<M; i++){
// a soma de cada linha começa com zero
	total = 0;
	
// somando os valores da linha em somaLinha[i]
		for(j=0; j<N; j++){
			somanota[i] += matriz[i][j];	
}
		total += somanota[i];
}

	printf("a soma das linhas sao:\n");
	for(i = 0; i<M; i++){
		printf ("%d\n", total);
	}
	
// tirando a media das notas
		for(j=0; j<N; j++){	
}
		media = total/4;


	printf("a media das linhas sao:\n");
	
	for(i = 0; i<M; i++){
		printf ("%d\n", media);
	}


}

