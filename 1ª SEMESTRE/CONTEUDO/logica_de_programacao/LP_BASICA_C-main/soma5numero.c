#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int pedinumero, i, soma;
    soma = 0;

    for ( i = 1; i <=5; i++) {
        printf("Digite um n�mero %d�: ",i);
        scanf("%d", &pedinumero);
        
        soma += pedinumero;
    }
    
    printf("A soma dos 5 n�meros: %d", soma );
}