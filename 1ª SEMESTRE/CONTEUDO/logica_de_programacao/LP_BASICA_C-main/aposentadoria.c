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

    printf("VERIFIQUE A SUA QUALIFICA��O PARA APOSENTADORIA\n");

    printf("         Digite o seu c�digo: \n");
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
        strcpy(resultado, "O senhor(a) N�O pode Requerer aposentadoria!");
    }
    
    printf("Ol� esse � o resultado da sua qualifica��o\n\nC�digo: %s\nIdade: %d\nTempo de Trabalho: %d anos\n%s", codigo, idade, anotrabalho, resultado);
    return 0;
}