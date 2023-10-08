#include <stdio.h>
#include <conio.h>

main(){
	int mat[3][4];
	int linha, coluna, soma=0;
	
	printf("Informe os valores para a matriz: \n");
	for(linha = 0; linha < 3; linha++)
		for(coluna = 0; coluna < 4; coluna++){
			printf("Linha %i - coluna %i: ", linha, coluna);
			scanf("%i", &mat[linha][coluna]);
			soma = soma + mat[linha][coluna];
		}
	
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 4; coluna++)
			printf("%i ", mat[linha][coluna]);
		printf("\n");
	}
	printf("Resultado da soma: %i", soma);
	getch();
	
}
