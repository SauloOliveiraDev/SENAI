#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

	char bandas[3][200], integrantes[3][5][200];
	int i, j;
	
	for(i = 0 ; i < 3; i++){
		printf("Digite o nome da banda: ");
		gets(bandas[i]);
		
		for(j = 0; j < 5 ; j++){
			printf("Digite o %dª integrante: ", j + 1);
			gets(integrantes[i][j]);
		}
	}
	
	system("cls || clear");
	
	for(i = 0 ; i < 3; i++){
		printf("%dª banda: %s\n", i + 1, bandas[i]);
        for(j = 0 ; j < 5; j++){
            printf("%dª integrantes: %s\n", j + 5, integrantes[i][j]);  
        }
    }
}
