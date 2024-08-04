#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int i;
    int numero[10];
    int qntPar = 0; 
	int qntImpar = 0;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o %dª número: ", i + 1);
        scanf("%d", &numero[i]);
        
        if(numero[i] % 2 == 0){
        	qntPar ++;
		}else{
			qntImpar ++;
		}
    }
    
    printf("\n\nQuantidade de números pares: %d\n", qntPar);
	printf("Quantidade de números impares: %d\n", qntImpar);
	printf("Números informados: ");
	for(i = 0; i < 10; i++) {
	printf("%d ", numero[i]);
	}
	
	getchar(); 
	return 0;
}
