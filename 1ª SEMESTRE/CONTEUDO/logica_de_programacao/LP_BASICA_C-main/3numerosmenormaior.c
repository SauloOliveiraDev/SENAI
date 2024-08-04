#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int primeiroNumero;
    int segundoNumero;
    int terceiroroNumero;
    int maior;
    int menor;

    printf("Digite um número: ");
    scanf("%d", &primeiroNumero);
    
    printf("Digite mais um número: ");
    scanf("%d", &segundoNumero);
    
    printf("Digite outro número: ");
    scanf("%d", &terceiroroNumero);

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    maior = maior > terceiroroNumero ? maior : terceiroroNumero;
    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
    menor = menor < terceiroroNumero ? menor : terceiroroNumero;
       
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d", menor);
    return 0;
}