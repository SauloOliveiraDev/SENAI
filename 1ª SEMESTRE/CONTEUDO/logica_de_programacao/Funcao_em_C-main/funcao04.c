#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void tabuada(int numero){
    int i;

    printf("SOMA\n\n");
    
    for ( i = 1; i <= 10; i++) {
        printf("%d + %d = %d\n", numero, i, numero + i);
    }
    
    printf("\nSUBTRACAO\n\n");
    
    for ( i = 1; i <= numero && i < 11; i++) {
        printf("%d - %d = %d\n", numero, i, numero - i);
    }
    
    printf("\nMULTIPLICACAO\n\n");
    
    for ( i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    printf("\nDIVISAO\n\n");
    
    for ( i = 1; i <= numero && i < 11; i++) {
        if (numero %i == 0 ) {
            printf("%d ÷ %d = %d\n", numero, i, numero / i);
        }else {
            printf("%d ÷ %d = %.1f\n", numero, i, (float)numero / i);
        }
        
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    system("cls || clear");

    tabuada(numero);

}