#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int prato;
    
    printf("------------------CARDÁPIO--------------------\n");
    printf("| Código            Prato            Valor   |\n");
    printf("|   1              Picanha          R$ 25.00 |\n");
    printf("|   2              Lasanha          R$ 20.00 |\n");
    printf("|   3             Strogonoff        R$ 18.00 |\n");
    printf("|   4           Bife Acebolado      R$ 15.00 |\n");
    printf("|   5            Pão com Ovo        R$ 5.00  |\n");
    printf("----------------------------------------------\n\n");

    printf("Digite o código do prato que deseja escolher: ");
    scanf("%d", &prato);

    system("cls || clear");

    switch (prato)
    {
    case 1:      
        printf("Picanha = R$ 25.00 \nPagar no Balcão !");
        break;
    case 2:      
        printf("Lasanha = R$ 20.00 \nPagar no Balcão !");
        break;
    case 3:      
        printf("Strogonoff = R$ 18.00 \nPagar no Balcão !");
        break;
    case 4:      
        printf("Bife Acebolado = R$ 15.00 \nPagar no Balcão !");
        break;
    case 5:      
        printf("Pão com Ovo = R$ 5.00 \nPagar no Balcão !");
        break;
    default:
        printf("Opção inserida INVÁLIDA !");
        break;
    }

    return 0; 
}