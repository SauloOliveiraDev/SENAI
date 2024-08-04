#include <stdio.h>
#include <stdlib.h>

void avaliador(numero){
    if (numero %2 == 0 && numero > 0)
    {
        printf("O numero %d e par !!!", numero);
    }else if(numero %2 != 0 && numero > 0){
        printf("O numero %d e impar !!!", numero);
    }
    
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    avaliador(numero);
}