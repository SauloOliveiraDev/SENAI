#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int numeros[5], i, maior = 0, menor = 9999;
    int impares = 0, negativos = 0, contador = 0;
    int pares = 0, somapar = 0, soma = 0;
    float media = 0, mediapar = 0;

    for ( i = 0; i < 5; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares++;
            somapar += numeros[i];
        }else {
            impares++;
        }

        if (numeros[i] < 0) {
            negativos ++;
        }else if(numeros[i] < 0){
            soma += numeros[i];
            contador ++;
        }

        maior = numeros[i] > maior ? numeros[i] : maior;
        menor = numeros[i] < menor ? numeros[i] : menor;
    }

    media = soma / contador;
    mediapar = somapar / pares;

    printf("Quantidade de n�meros imapares: %d\n", impares);
    printf("Quantidade de n�meros negativos: %d\n", negativos);
    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d\n", menor);
    printf("M�dia de n�meros pares: %.2f\n", mediapar);    
    printf("M�dia dos n�meros: %.2f\n", media);    
}