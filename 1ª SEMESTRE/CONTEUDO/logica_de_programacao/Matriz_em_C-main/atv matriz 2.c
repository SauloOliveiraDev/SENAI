#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

	char materia[3][200], resposta[100];
	float nota[3][2], media[3], soma;
	int i, j;
	
	for(i = 0 ; i < 3 ; i++){
		printf("Digite o nome da %dª disciplina: ", i + 1);
		gets(materia[i]);
		
		for(j = 0 ; j < 2 ; j++){
			printf("Digite a %dª nota: ", j + 1);
			scanf("%f", &nota[i][j]);
			
			soma += nota[i][j];
		}
		
	media[i] = soma / j;
	soma = 0;
	
	printf("\n");
	fflush(stdin);
	}
	
	system("cls || clear");
	
	for(i = 0 ; i < 3 ; i++){
		
		if(media[i] >= 7){
			strcpy(resposta, "Aprovado !\n");
		}else if(media[i] >= 5){
			strcpy(resposta, "Recuperação !\n");
		}else{
			strcpy(resposta, "Reprovado !\n");
		}
		
		printf("Matéria: %s\n", materia[i]);
		
		for(j = 0 ; j < 2 ; j++){
			printf("%dª nota: %.1f\n", j + 1, nota[i][j]);		
		}
		
		printf("Média: %.1f\n", media[i]);
		printf("%s", resposta);
		printf("\n");
	}
	return 0;
}
