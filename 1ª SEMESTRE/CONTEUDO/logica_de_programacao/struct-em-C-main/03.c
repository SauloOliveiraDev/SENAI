#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_alunos
{
    char nome[200];
    int idade;
    float notas[2];
    float media;
};


int main(){
    setlocale(LC_ALL, "portuguese");

    struct dados_alunos dados[3];
    int i, j;
    float soma = 0;

    for ( i = 0; i < 3; i++) {
        printf("Digite o nome do %dª aluno: ", i + 1);
        gets(dados[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &dados[i].idade);

        for ( j = 0; j < 2; j++) {
            printf("Digite a %dª nota: ", j + 1);
            scanf("%f", &dados[i].notas[j]);

            soma += dados[i].notas[j];
        }

    dados[i].media = soma / j;
    soma = 0;
    fflush(stdin);
    system("cls || clear");
    }

    for ( i = 0; i < 3; i++) {
        printf("Aluno: %s\n", dados[i].nome);
        printf("Idade: %d\n", dados[i].idade);
        printf("Média: %.1f\n\n", dados[i].media);
    }
    
    return 0;
}