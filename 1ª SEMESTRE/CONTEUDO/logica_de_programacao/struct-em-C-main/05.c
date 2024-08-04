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
    printf("\tDigite os dados do funcion�rio !\n\n");
    printf("Digite o nome: ");
    gets(funcionario[i].geral.nome);
    printf("Digite a data de admiss�o: ");
    gets(funcionario[i].dataAdimissao);
    printf("Digite a matr�cula: ");
    gets(funcionario[i].matricula);
    printf("Digite o endere�o: ");
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
    printf("Digite o endere�o: ");
    gets(cliente[i].geral.endereco);
    
    system("cls || clear"); 
    }
    
    printf("\tDados do funcion�rio !!!\n\n");
    
    for (i = 0; i < 3; i++)
    {
    printf("Nome: %s\n", funcionario[i].geral.nome);
    printf("Data de admiss�o: %s\n", funcionario[i].dataAdimissao);
    printf("Matr�cula: %s\n", funcionario[i].matricula);
    printf("Endere�o: %s\n\n", funcionario[i].geral.endereco);
    }
    
    printf("\tDados do cliente !!!\n\n");
    
    for (i = 0; i < 3; i++)
    {
    printf("Nome: %s\n", cliente[i].geral.nome);
    printf("Data de nascimento: %s\n", cliente[i].dataNascimento);
    printf("Endere�o: %s\n\n", cliente[i].geral.endereco);
    }
    return 0;
}