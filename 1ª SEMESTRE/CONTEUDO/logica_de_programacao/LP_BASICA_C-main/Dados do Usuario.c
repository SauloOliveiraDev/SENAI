#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade = 0;
    float peso = 0;
    char sexo;
    char nome[250];

    printf("Digite sua idade: ");
    scanf("%d", &idade); //<- LER UM DADO

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // COMANDO UTILIZADO PARA LIMPAR O CACHE DE INPUT

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    fflush(stdin);

    printf("Digite seu nome: ");
    gets(nome);
    //fgets(nome, 250, stdin); <- COMANDO RECOMENDADO POREM PULA UMA LINHA

    system("cls || clear"); //<- LIMPA A TELA DO TERMINAL 

    printf("Seu nome: %s\n", nome);
    printf("Sua idade: %d\n", idade);
    printf("Seu sexo: %c\n", sexo);
    printf("Seu peso: %.2f\n", peso);
}