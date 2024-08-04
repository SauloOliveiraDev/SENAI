#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

	int soma = 0, contador = 0, contadorpar = 0, contadorimpar = 0, num = 0, numPar = 0, numImpar = 0, somaPar = 0;
	float mediaPar, media;
	
	do{
		printf("Digite o %dª número: ",contador + 1);
		scanf("%d", &num);
		
	if(num > 0){
	contador ++;
	soma += num;
		
		if(num > 0 && num % 2 == 0){
			numPar++;
			somaPar += num;
		}else if(num %2 == 1){
			numImpar++;	
		}
	
	}
	
	}while(num != 0);
	
	mediaPar = somaPar / (float) numPar;
	
	media = soma / (float) contador;
	
	printf("Quantidade de números Pares: %d\n", numPar);
	printf("Quantidade de números Impares: %d\n", numImpar);
	printf("Média dos números Pares: %.2f\n", mediaPar);
	printf("Média Geral: %.2f", media);
		
}
