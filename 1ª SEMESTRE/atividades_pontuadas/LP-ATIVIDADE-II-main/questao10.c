#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int numero, numeroDois, soma, subtracao, resultado;
char operacao;

printf("Digite um n�mero: ");
scanf("%d",&numero);

printf("Digite outro n�mero: ");
scanf("%d",&numeroDois);

fflush(stdin);

printf("+ = soma\n- = subtra��o\nDigite qual opera��o deseja realizar: ");
scanf("%c",&operacao);

switch (operacao) {
case '+':
    soma = numero + numeroDois;
    resultado = soma;
    break;

case '-':
    subtracao = numero - numeroDois;
    resultado = subtracao;
    break;

default:
    printf("Opera��o selecionada inv�lida !!!");
    break;
}

system("cls || clear");

printf("Resultado: %d %c %d = %d", numero, operacao, numeroDois, resultado);

getchar();
return 0;
}