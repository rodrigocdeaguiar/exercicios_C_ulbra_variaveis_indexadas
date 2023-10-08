#include <stdio.h>
#include <conio.h>

main(){
	int mat1[3][3], mat2[3][3], soma[3][3];
	int linha, coluna;
	
	printf("Informe os elementos da matriz 1: \n");
	for(linha = 0; linha < 3; linha ++)
		for(coluna = 0; coluna < 3; coluna++){
			printf("Linha %i - coluna %i: ", linha, coluna);
			scanf("%i", &mat1[linha][coluna]);
		}
		
	printf("Informe os elementos da matriz 2: \n");
	for(linha = 0; linha < 3; linha ++)
		for(coluna = 0; coluna < 3; coluna++){
			printf("Linha %i - coluna %i: ", linha, coluna);
			scanf("%i", &mat2[linha][coluna]);
			soma[linha][coluna] = mat1[linha][coluna] + mat2[linha][coluna];
		}
	
	for(linha = 0; linha < 3; linha ++){
		for(coluna = 0; coluna < 3; coluna++)
			printf("%i ", soma[linha][coluna]);
			printf("\n");
		}
}
