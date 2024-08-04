#include <stdio.h>
#include <stdlib.h>

// #define TAMANHO 6;

int pares(int vetor[]){
    int i;
    int pares = 0;
    
    for ( i = 0; i < 6; i++) {
    if (vetor[i] %2 == 0) {
        pares++;
    }
    }
    
    return pares;
}

int impares(int vetor[]){
    int i;
    int impares = 0;
    
    for ( i = 0; i < 6; i++) {
    if (vetor[i] %2 != 0) {
        impares++;
    }
    }

    return impares;
}

int main(){
    int numeros[6];
    int par, impar;
    int i;

    for ( i = 0; i < 6; i++) {
    printf("Digite o %dª numero: ", i + 1);
    scanf("%d", &numeros[i]);
    }

    pares(numeros);
    impares(numeros);

    par = pares(numeros);
    impar = impares(numeros);

    printf("Par = %d\n", par);
    printf("Impar = %d", impar);

    return 0;
}