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
        printf("Digite a %dª nota: ", i + 1);
        scanf("%d", &numero[i]);
        
    	maior = maior > numero[i] ? maior : numero[i];
    	menor = menor < numero[i] ? menor : numero[i];
    }
	
		printf("\n\n\n");
		printf("Maior número: %d\n", maior);
		printf("Menor número: %d\n", menor);
}
