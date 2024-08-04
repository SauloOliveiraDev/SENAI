#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i, j;
    
    struct fixa {
    char nome[200];
    int idade;
    float notas[2];
    };
    struct fixa fixa[3];


    for ( i = 0; i < 3; i++) {
    printf("Digite seu nome: ");
    gets(fixa[i].nome);

    printf("Digite a sua idade: ");
    scanf("%d", &fixa[i].idade);

    for ( j = 0; j < 2; j++) {
        printf("Digite a %dª nota: ", j + 1);
        scanf("%f", &fixa[i].notas[j]);
    }

    fflush(stdin);  
    printf("\n");  
    }
    

    printf("Exibindo dados...\n\n");

    for ( i = 0; i < 3; i++) {
    printf("Nome: %s\n", fixa[i].nome);
    printf("Idade: %d\n", fixa[i].idade);

    for ( j = 0; j < 2; j++) {
        printf("%dª nota: %.1f\n", j + 1, fixa[i].notas[j]);
    }
    
    printf("\n");
    }

    return 0;
}