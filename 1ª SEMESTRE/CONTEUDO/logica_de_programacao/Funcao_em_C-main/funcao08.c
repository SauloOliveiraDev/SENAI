#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
    int operacao;
    operacao = a + b;

    return operacao;
}
int subtracao(int a, int b){
    int operacao;
    operacao = a - b;

    return operacao;
}
int multiplicacao(int a, int b){
    int operacao;
    operacao = a * b;

    return operacao;
}
float divisao(int a, int b){
    float operacao;
    operacao = a / (float)b;

    return operacao;
}


int main(){
    int primeiroNumero;
    int segundoNumero;
    int resultadoSoma;
    int resultadoSubtracao;
    int resultadoMultiplicacao;
    float resultadoDivisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

    soma(primeiroNumero, segundoNumero);
    subtracao(primeiroNumero, segundoNumero);
    multiplicacao(primeiroNumero, segundoNumero);
    divisao(primeiroNumero, segundoNumero);

    resultadoSoma = soma(primeiroNumero, segundoNumero);
    resultadoSubtracao = subtracao(primeiroNumero, segundoNumero);
    resultadoMultiplicacao = multiplicacao(primeiroNumero, segundoNumero);
    resultadoDivisao = divisao(primeiroNumero, segundoNumero);

    printf("Soma: %d\n", resultadoSoma);
    printf("Subtracao: %d\n", resultadoSubtracao);
    printf("Multiplicacao: %d\n", resultadoMultiplicacao);
    printf("Divisao: %.1f\n", resultadoDivisao);

    return 0;
}