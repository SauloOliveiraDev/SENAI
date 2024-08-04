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

    printf("Digite um n�mero: ");
    scanf("%d", &num1);
    printf("Digite outro n�mero: ");
    scanf("%d", &num2);
    
    fflush(stdin);

    printf("Digite o s�mbolo da opera��o que deseja realizar: ");
    scanf("%c", &selecoperacao);

    switch (selecoperacao)
    {
    case '+':
        strcpy(nomecalculo, "Soma: ");
        operacao = num1 + num2;
        break;
    case '-':
        strcpy(nomecalculo, "Subtra��o: ");
        operacao = num1 - num2;
        break;
    case '*':
        strcpy(nomecalculo, "Multiplica��o: ");
        operacao = num1 * num2;
        break;
    case '/':
        strcpy(nomecalculo, "Divis�o: ");
        operacao = (num1 / num2);
        break;
    
    default:
        break;
    }

    system("cls || clear");

    printf("Primeiro n�mero: %d\n", num1);
    printf("Segundo n�mero: %d\n", num2);
    printf("%s %2.f\n", nomecalculo, operacao);
    
    return 0;
}