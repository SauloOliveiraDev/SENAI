#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct dados_geral {
    char nome[200];
    char endereco[100];
};
struct dados_funcionario {
    char dataAdimissao[200];
    char matricula[100];
    struct dados_geral geral;
};
struct dados_cliente {
    char dataNascimento[200];
    struct dados_geral geral;
};

int main(){
    setlocale(LC_ALL, "portuguese");

    int i;
    struct dados_funcionario funcionario[3];
    struct dados_cliente cliente[3];

    
    for (i = 0; i < 3; i++)
    {
    printf("\tDigite os dados do funcionário !\n\n");
    printf("Digite o nome: ");
    gets(funcionario[i].geral.nome);
    printf("Digite a data de admissão: ");
    gets(funcionario[i].dataAdimissao);
    printf("Digite a matrícula: ");
    gets(funcionario[i].matricula);
    printf("Digite o endereço: ");
    gets(funcionario[i].geral.endereco);
    
    system("cls || clear"); 
    }
    
    
   
    for (i = 0; i < 3; i++)
    {
    printf("\tDigite os dados do cliente !\n\n");
    printf("Digite o nome: ");
    gets(cliente[i].geral.nome);
    printf("Digite a data nascimento: ");
    gets(cliente[i].dataNascimento);
    printf("Digite o endereço: ");
    gets(cliente[i].geral.endereco);
    
    system("cls || clear"); 
    }
    
    printf("\tDados do funcionário !!!\n\n");
    
    for (i = 0; i < 3; i++)
    {
    printf("Nome: %s\n", funcionario[i].geral.nome);
    printf("Data de admissão: %s\n", funcionario[i].dataAdimissao);
    printf("Matrícula: %s\n", funcionario[i].matricula);
    printf("Endereço: %s\n\n", funcionario[i].geral.endereco);
    }
    
    printf("\tDados do cliente !!!\n\n");
    
    for (i = 0; i < 3; i++)
    {
    printf("Nome: %s\n", cliente[i].geral.nome);
    printf("Data de nascimento: %s\n", cliente[i].dataNascimento);
    printf("Endereço: %s\n\n", cliente[i].geral.endereco);
    }
    return 0;
}