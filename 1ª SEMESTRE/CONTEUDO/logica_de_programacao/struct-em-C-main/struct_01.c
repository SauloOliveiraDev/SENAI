#include <stdio.h>
#include <stdlib.h>

int main(){
    /*char nome[200];
    int idade;

    printf("Digite o nome do aluno: ");
    gets(nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Exibindo dados do aluno...");

    printf("Nome do aluno: %s\n", nome);
    printf("Idade do aluno: %d\n", idade); */

    struct ficha_aluno {
    char nome[200];
    int idade;
    };
    struct ficha_aluno aluno;
    printf("Digite o nome do aluno: ");
    gets(aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Exibindo dados do aluno...");

    printf("Nome do aluno: %s\n", aluno.nome);
    printf("Idade do aluno: %d\n", aluno.idade);

    return 0;
}