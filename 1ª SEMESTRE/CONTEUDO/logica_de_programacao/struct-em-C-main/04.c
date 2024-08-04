#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_pessoa {
    char nome[200];
    int idade;
    char cpf[20];
};

int main(){
    setlocale(LC_ALL, "portuguese");

    struct dados_pessoa funcionario;
    struct dados_pessoa cliente;

    printf("\tDigite os dados do funcionário !\n\n");
    printf("Digite o nome: ");
    gets(funcionario.nome);
    printf("Digite a idade: ");
    scanf("%d", &funcionario.idade);
    fflush(stdin);
    printf("Digite o CPF: ");
    gets(funcionario.cpf);
    
    system("cls || clear");

    printf("\tDigite os dados do cliente !\n\n");
    printf("Digite o nome: ");
    gets(cliente.nome);
    printf("Digite a idade: ");
    scanf("%d", &cliente.idade);
    fflush(stdin);
    printf("Digite o CPF: ");
    gets(cliente.cpf);

    system("cls || clear");

    printf("\tDados do funcionário !!!\n\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("CPF: %s\n\n", funcionario.cpf);
    
    printf("\tDados do cliente !!!\n\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Idade: %d\n", cliente.idade);
    printf("CPF: %s\n\n", cliente.cpf);

    return 0;
}