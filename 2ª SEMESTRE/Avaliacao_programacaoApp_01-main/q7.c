#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define quantidadeMeses 5
#define diasTrabalhados 22;
#define quantidadeProdutos 2

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct gerenciamentoEstoque
    {
        char produto[200];
        float meses[quantidadeMeses];
        float somaMediaMeses;
        float tempoReposicao;
        float loteReposicao;
        float vendaMediaDiaria;
        float estoqueMinimo;
        float estoqueMaximo;
        float estoqueAtual;
    };

    struct gerenciamentoEstoque gerenciar[3];
    int i, j;

    for (i = 0; i < quantidadeProdutos; i++) {
        printf("Digite o nome do produto: ");
        gets(gerenciar[i].produto);

        for (j = 0; j < quantidadeMeses; j++)
        {
            printf("Insira a média do %dª mês: ", j + 1);
            scanf("%f", &gerenciar[i].meses[j]);

            gerenciar[i].somaMediaMeses += gerenciar[i].meses[j];
        }

        gerenciar[i].vendaMediaDiaria = (gerenciar[i].somaMediaMeses / quantidadeMeses) / diasTrabalhados;

        printf("Qual o tempo de reposição(em dias) do produto: ");
        scanf("%f", &gerenciar[i].tempoReposicao);

        printf("Digite a quantidade de %s no lote de reposição: ", gerenciar[i].produto);
        scanf("%f", &gerenciar[i].loteReposicao);

        gerenciar[i].estoqueMinimo = gerenciar[i].tempoReposicao * gerenciar[i].vendaMediaDiaria;
        gerenciar[i].estoqueMaximo = gerenciar[i].estoqueMinimo + gerenciar[i].loteReposicao;

        printf("Digite a quantidade de %s do estoque atualmente: ", gerenciar[i].produto);
        scanf("%f", &gerenciar[i].estoqueAtual);

        fflush(stdin);
    }

    for (i = 0; i < quantidadeProdutos; i++) {
        printf("Produto: %s\n\n", gerenciar[i].produto);
        printf("Media de venda diaria: %.1f\n", gerenciar[i].vendaMediaDiaria);
        printf("Estoque mínimo: %.1f\n", gerenciar[i].estoqueMinimo);
        printf("Estoque máximo: %.1f\n", gerenciar[i].estoqueMaximo);

        gerenciar[i].estoqueAtual > gerenciar[i].estoqueMinimo ? printf("Não comprar mais %s\n\n", gerenciar[i].produto) : printf("Comprar mais %s\n\n", gerenciar[i].produto);
    }
}