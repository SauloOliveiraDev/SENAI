#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "portuguese");
    float valorProduto;
    int formaPaga, quantParcelas;
    float desconto;
    char nomePaga[100];
    float ValorFinal, valorParcelas;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("1 - À Vista\n2 - À Prazo\nQual a forma de pagamento desejada: ");
    scanf("%d", &formaPaga);

    system("cls || clear");

    switch (formaPaga)
    {
    case 1:
        desconto = valorProduto * 0.1;
        
        strcpy(nomePaga, "À Vista\n");
        
        ValorFinal = valorProduto - desconto;
        
        printf("Valor do Produto: R$%.2f\n", valorProduto);
        printf("Forma de pagamento: %s\n", nomePaga);
        printf("Valor do desconto: R$%.2f\n", desconto);
        printf("Total a Pagar: R$%.2f\n", ValorFinal);
        
        break;
    
    case 2:
        printf("Em quantas parcelas deseja pagar: ");
        scanf("%d", &quantParcelas);
        
        strcpy(nomePaga, "À Prazo\n");
        
        ValorFinal = valorProduto;
        
        valorParcelas = valorProduto / quantParcelas;  
        
        printf("Valor do Produto: R$%2.f\n", valorProduto);
        printf("Forma de pagamento: %s\n", nomePaga);
        printf("Quantidade de Parcelas: %d\n", quantParcelas);
        printf("Valor por Parcela: R$ %.2f\n", valorParcelas);
        printf("Total à prazo: R$ %.2f", ValorFinal);
        break;
        
        return 0;

    }




}