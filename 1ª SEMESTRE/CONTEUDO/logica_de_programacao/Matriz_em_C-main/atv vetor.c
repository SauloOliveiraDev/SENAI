#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nomes [3][200];
    float notas [2][3], soma = 0, media[2];
    int i, j;

    for(i = 0 ; i < 3; i++){
        printf("Digite o nome do aluno: ");
        gets(nomes[i]);
        
        for(j = 0 ; j < 3; j++){
            printf("Digite a %dª nota do aluno: ", j + 1);
            scanf("%f", &notas[i][j]);
            
            soma += notas[i][j];
        }
        media[i] = soma / j ;
        soma = 0;
        printf("\n");
		fflush(stdin);
    }
      
	system("cls || clear");
    
    for(i = 0 ; i < 3; i++){
        printf("Nome do aluno: %s\n", nomes[i]);
    
        for(j = 0 ; j < 3; j++){
            printf("Nota do aluno: %.1f\n", notas[i][j]);  
        }
        printf("Média do aluno: %.1f\n\n", media[i]);
    }
   
    return 0;
}

