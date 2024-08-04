#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int quantidade;
    float valor;
    float precoUnitario;

    printf("Quantas maçães deseja comprar:\n");
    scanf("%d", &quantidade);

    precoUnitario = quantidade < 12 ? 1.30 : 1.00;

    valor = (precoUnitario * quantidade);
    //valor = (quantidade >= 12) ? (1.00 * quantidade) : (1.30 * quantidade);

    printf("Quantidade de maçães compradas: %d\n", quantidade);
    printf("Valor a pagar: R$%.2f", valor);

    return 0;
}