#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
	
	int numeros[10], negativos = 0, soma = 0, i;
	
	for(i = 0; i < 10; i++) {
        printf("Digite o %dª número: ", i + 1);
        scanf("%d", &numeros[i]);
        
        numeros[i] < 0 ? negativos++ : (soma += numeros[i]);  
    }
    
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %d\n\n", soma);
}
