#include <stdio.h>
#include <stdlib.h>

float inflacaoConversao(float preco){
    float inflacao;
    float preResultado;

    if (preco < 100.00) {
        inflacao = 0.1;
    }else if (preco >= 100.00)
    {
        inflacao = 0.2;
    }
    
    preResultado = preco * inflacao;
    return preco + preResultado;
}

int main(){
    float preco;
    float resultadoInflacao;

    printf("Digite um preco: ");
    scanf("%f", &preco);

    resultadoInflacao = inflacaoConversao(preco);

    printf("Resultado: %.1f", resultadoInflacao);

    
}