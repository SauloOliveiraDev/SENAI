#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char codigo[150];
    int ano, idade;
    int anotrabalho;
    char resultado[500];

    printf("VERIFIQUE A SUA QUALIFICAÇÃO PARA APOSENTADORIA\n");

    printf("         Digite o seu código: \n");
    gets(codigo);

    fflush(stdin);

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("Digite a quantos anos trabalha na impresa: ");
    scanf("%d", &anotrabalho);

    idade = 2023 - ano;

    system("cls || clear");

    if (idade >= 65 || anotrabalho >= 30)
    {
        strcpy(resultado, "O senhor(a) pode Requerer aposentadoria!");
    }
    else
    {
        strcpy(resultado, "O senhor(a) NÃO pode Requerer aposentadoria!");
    }
    
    printf("Olá esse é o resultado da sua qualificação\n\nCódigo: %s\nIdade: %d\nTempo de Trabalho: %d anos\n%s", codigo, idade, anotrabalho, resultado);
    return 0;
}