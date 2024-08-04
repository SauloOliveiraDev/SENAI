#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float valorProduto, ValorFinal, valorParcelas, desconto;
    int formaPaga, quantParcelas;
    char nomePaga[100];

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    do{
    printf("\n\n1 - À Vista\n2 - À Prazo\nQual a forma de pagamento desejada: ");
    scanf("%d", &formaPaga);
        
        if(formaPaga != 1 && formaPaga != 2){
            system("cls || clear");
            printf("Forma de pagamento inválida !!!\n");
            printf("Tente novamente...");
        }
    }while (formaPaga != 1 && formaPaga != 2);
    
    system("cls || clear");

    switch (formaPaga)
    {
    case 1:
        desconto = valorProduto * 0.1;
        ValorFinal = valorProduto - desconto;

        strcpy(nomePaga, "À Vista\n");
        system("cls || clear");

        printf("Valor do Produto: R$%.2f\n", valorProduto);
        printf("Forma de pagamento: %s\n", nomePaga);
        printf("Valor do desconto: R$%.2f\n", desconto);
        printf("Total a Pagar: R$%.2f\n", ValorFinal);

        break;

    case 2:
    
    do {
        printf("Em quantas parcelas deseja pagar: ");
        scanf("%d", &quantParcelas);
       
       if (quantParcelas > 6) {
        printf("\nO parcelamento só pode ser feito em até 6 parcelas.\n");
        printf("Tente novamente...\n\n");
       }
       } while (quantParcelas > 6);
        
        strcpy(nomePaga, "À Prazo\n");
        system("cls || clear");
        
        ValorFinal = valorProduto;
        valorParcelas = valorProduto / quantParcelas;

        printf("Valor do Produto: R$%.2f\n", valorProduto);
        printf("Forma de pagamento: %s\n", nomePaga);
        printf("Quantidade de Parcelas: %d\n", quantParcelas);
        printf("Valor por Parcela: R$ %.2f\n", valorParcelas);
        printf("Total à prazo: R$ %.2f", ValorFinal);
        break;
        return 0;
    }
}