#include <stdio.h>
#include <stdlib.h>

int main(){
    struct fixa
    {
    char nome[200];
    int idade;
    float peso;
    float altura;
    };
    
    struct fixa fixa;

    printf("Digite seu nome: ");
    gets(fixa.nome);

    printf("Digite a sua idade: ");
    scanf("%d", &fixa.idade);

    printf("Digite o seu peso: ");
    scanf("%f", &fixa.peso);
    
    printf("Digite a sua altura: ");
    scanf("%f", &fixa.altura);

    printf("Exibindo dados...\n\n");

    printf("Nome: %s\n", fixa.nome);
    printf("Idade: %d\n", fixa.idade);
    printf("Peso: %.2f\n", fixa.peso);
    printf("Altura: %.2f\n", fixa.altura);

    return 0;
}