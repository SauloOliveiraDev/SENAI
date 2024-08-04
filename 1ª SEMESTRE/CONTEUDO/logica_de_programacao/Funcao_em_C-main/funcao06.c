#include <stdio.h>
#include <stdlib.h>

int par = 0, impar = 0;

void avaliadorDeParOuImpar(int numero){ 
    if (numero %2 == 0 && numero > 0) {
        par++;
    }else if(numero %2 != 0 && numero > 0){
        impar++;
    }
}

int main() {
    int numero, i;

    for ( i = 0; i < 6; i++) {
    printf("Digite um numero: ");
    scanf("%d",&numero);
    avaliadorDeParOuImpar(numero);
    }

    system("cls || clear");

    printf("Quantidade de numeros pares: %d\n", par);
    printf("Quantidade de numeros impar: %d\n", impar);
}