#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
    printf("=================================\n");
    printf("\t    Senai\n");
    printf("=================================\n\n");
}

int somar(int a, int b){
    int resultado;

    resultado = a + b;

    return(resultado);
}

int main(){
    int primeiroNumero;
    int segundoNumero;
    int soma;

    cabecalho();

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiroNumero);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

    system("cls || clear");

    cabecalho ();
    
    soma = somar(primeiroNumero, segundoNumero);

    printf("Primeiro numero: %d\n", primeiroNumero);
    printf("Segundo numero: %d\n", segundoNumero);
    printf("Soma : %d\n", soma);
    return 0;
}