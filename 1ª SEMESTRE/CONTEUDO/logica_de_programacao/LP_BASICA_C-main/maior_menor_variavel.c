#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int i;
    int numero[5];
    int menor = __INT_MAX__;
	int maior = 0;
    
    for(i = 0; i < 5; i++) {
        printf("Digite a %d� nota: ", i + 1);
        scanf("%d", &numero[i]);
        
    	maior = maior > numero[i] ? maior : numero[i];
    	menor = menor < numero[i] ? menor : numero[i];
    }
	
		printf("\n\n\n");
		printf("Maior n�mero: %d\n", maior);
		printf("Menor n�mero: %d\n", menor);
}
