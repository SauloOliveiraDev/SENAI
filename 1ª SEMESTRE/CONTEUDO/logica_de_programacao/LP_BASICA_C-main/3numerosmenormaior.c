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

    printf("Digite um n�mero: ");
    scanf("%d", &primeiroNumero);
    
    printf("Digite mais um n�mero: ");
    scanf("%d", &segundoNumero);
    
    printf("Digite outro n�mero: ");
    scanf("%d", &terceiroroNumero);

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    maior = maior > terceiroroNumero ? maior : terceiroroNumero;
    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
    menor = menor < terceiroroNumero ? menor : terceiroroNumero;
       
    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d", menor);
    return 0;
}