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
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numero[i]);
        
        if(numero[i] % 2 == 0){
        	qntPar ++;
		}else{
			qntImpar ++;
		}
    }
    
    printf("\n\nQuantidade de n�meros pares: %d\n", qntPar);
	printf("Quantidade de n�meros impares: %d\n", qntImpar);
	printf("N�meros informados: ");
	for(i = 0; i < 10; i++) {
	printf("%d ", numero[i]);
	}
	
	getchar(); 
	return 0;
}
