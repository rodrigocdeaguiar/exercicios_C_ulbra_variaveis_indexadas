#include <stdio.h>
#include <conio.h>

main(){
	int mat[2][2];
	int linha, coluna, menor, pos_l, pos_c;
	
	printf("Informe os valores para a matriz: \n");
	for(linha=0; linha<2; linha++)
		for(coluna=0; coluna<2; coluna++){
			printf("Linha %i - coluna %i: ", linha, coluna);
			scanf("%i", &mat[linha][coluna]);
		}
	
	menor = mat[0][0];
	pos_l = 0;
	pos_c = 0;
	for(linha=0; linha<2; linha++)
		for(coluna=0; coluna<2; coluna++)
			if(menor>mat[linha][coluna]){
				menor = mat[linha][coluna];
				pos_l = linha;
				pos_c = coluna;
			}
	
	printf("O menor valor da matriz eh [%i][%i] = %i", pos_l, pos_c, menor);
}
