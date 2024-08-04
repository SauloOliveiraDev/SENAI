#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int num1, num2;
    char selecoperacao;
    float operacao;
    char nomecalculo[100];

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    
    fflush(stdin);

    printf("Digite o símbolo da operação que deseja realizar: ");
    scanf("%c", &selecoperacao);

    switch (selecoperacao)
    {
    case '+':
        strcpy(nomecalculo, "Soma: ");
        operacao = num1 + num2;
        break;
    case '-':
        strcpy(nomecalculo, "Subtração: ");
        operacao = num1 - num2;
        break;
    case '*':
        strcpy(nomecalculo, "Multiplicação: ");
        operacao = num1 * num2;
        break;
    case '/':
        strcpy(nomecalculo, "Divisão: ");
        operacao = (num1 / num2);
        break;
    
    default:
        break;
    }

    system("cls || clear");

    printf("Primeiro número: %d\n", num1);
    printf("Segundo número: %d\n", num2);
    printf("%s %2.f\n", nomecalculo, operacao);
    
    return 0;
}