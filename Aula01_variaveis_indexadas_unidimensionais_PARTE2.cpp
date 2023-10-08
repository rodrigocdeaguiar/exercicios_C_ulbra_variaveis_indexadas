#include <stdio.h>
#include <conio.h>

main(){
	int vet[10], menor, posicao, cont=0, i;
	
	printf("Digite 10 valores inteiros:\n");
	for(i=0; i<10; i++){
		scanf("%i", &vet[i]);
	}
	
	menor = vet[0];
	posicao = 0;
	
	for(i=1; i<10; i++)
		if(menor > vet[i]){
			menor = vet[i];
			posicao = i;
		}
	
	for(i=0; i<10; i++)
		if(vet[i] % 2 == 0){
			cont++;
		}
	
	printf("Vetor digitado: ");
	for(i=0; i<10; i++){
		printf("%i ", vet[i]);
	}
	printf("\n O menor valor eh %i e a sua posicao eh %i\n", menor, posicao);
	printf("%i sao multiplos de 2.", cont);
	getch();
}
