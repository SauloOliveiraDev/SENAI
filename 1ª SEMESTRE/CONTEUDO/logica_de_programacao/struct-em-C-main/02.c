#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_usuario
{
    char nome[200];
    char dataNascimento[200];
    int rg;
    int cpf;
};

int main(){
    setlocale(LC_ALL, "portuguese");

    struct dados_usuario dados[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o %dª nome: ", i + 1);
        gets(dados[i].nome);

        printf("Digite a data de nascimento: ");
        gets(dados[i].dataNascimento);

        printf("Digite o RG: ");
        scanf("%d", &dados[i].rg);

        printf("Digite o CPF: ");
        scanf("%d", &dados[i].cpf);

        system("cls || clear");
        fflush(stdin);
    }
    
    for ( i = 0; i < 5; i++)
    {
        printf("%dª nome: %s\n", i + 1, dados[i].nome);
        printf("Data de nascimento: %s\n", dados[i].dataNascimento);
        printf("RG: %d\n", dados[i].rg);
        printf("CPF: %d\n\n", dados[i].cpf);
    }

    return 0;
}
