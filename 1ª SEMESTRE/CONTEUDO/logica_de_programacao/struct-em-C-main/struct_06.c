#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i, j;
    float soma = 0;
    
    struct fixa {
    char nome[200];
    int idade;
    float notas[2];
    float media;
    };
    struct fixa fixa[2];


    for ( i = 0; i < 2; i++) {
    printf("Digite seu nome: ");
    gets(fixa[i].nome);

    printf("Digite a sua idade: ");
    scanf("%d", &fixa[i].idade);

    for ( j = 0; j < 2; j++) {
        printf("Digite a %dª nota: ", j + 1);
        scanf("%f", &fixa[i].notas[j]);

        soma += fixa[i].notas[j];
    }

    fixa[i].media = soma / j;

    soma = 0;

    fflush(stdin);  
    printf("\n");  
    }
    

    printf("Exibindo dados...\n\n");

    for ( i = 0; i < 2; i++) {
    printf("Nome: %s\n", fixa[i].nome);
    printf("Idade: %d\n", fixa[i].idade);

    for ( j = 0; j < 2; j++) {
        printf("%dª nota: %.1f\n", j + 1, fixa[i].notas[j]);
    }
    
    printf("Média: %.1f\n", fixa[i].media);
    printf("\n");
    }

    return 0;
}