#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int contador, somaImpar = 0, numPar = 0, numImpar = 0, somaPar = 0, num = 0;
float mediaPar, mediaImpar;

do{
		printf("Digite o %d� n�mero: ",contador + 1);
		scanf("%d", &num);
		
	if(num > 0){
	contador ++;
	
		
		if(num > 0 && num % 2 == 0){
			numPar++;
			somaPar += num;
		}else if(num %2 == 1){
			numImpar++;	
            somaImpar += num;
		}
	
	}
	
	}while(num > 0);
	
	mediaPar = somaPar / (float) numPar;
	
	mediaImpar = somaImpar / (float) numImpar;
	
	printf("Quantidade de n�meros Pares: %d\n", numPar);
	printf("Quantidade de n�meros Impares: %d\n", numImpar);
	printf("M�dia dos n�meros Pares: %.2f\n", mediaPar);
	printf("M�dia dos n�meros Impar: %.2f\n", mediaImpar);
	
}