#include <stdio.h>
#include <conio.h>

main(){
	float notas[10];
	float soma, media;
	int i;
	
	soma = 0;
	printf("Digite 10 notas:\n");
	for (i=0; i<10; i++){
		scanf("%f", &notas[i]);
		soma = soma + notas[i];
	}
	media = soma / 10;
	printf("Media da turma: %.1f", media);
	getch();
}
