#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
	
int main(){
    setlocale(LC_ALL, "portuguese");
	int i , num, soma;
	float media;
	
	do {
		printf("Digite o %d� n�mero: ", i + 1);
		scanf("%d", &num);
		
		if(num > 0){
		soma += num;
		i ++;
		}
	
	}while(num >= 0);
	
	media = soma / i;
	
	system("cls || clear");
	
	printf("M�dia dos %d n�meros informados: \n%.2f", i, media);	
}
