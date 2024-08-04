#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

	char nomes[5] [200];
	int idades[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Digite qual o nome: ");
		fgets(nomes[i], 200, stdin);
		
		printf("Digite a idade: ");
		scanf("%d",&idades[i]);
		
		fflush(stdin);
	}
	
	system("cls || clear");
	
	for(i = 0; i < 5; i++){
		printf("Nome: %s\n", nomes[i]);
		printf("Idade: %d\n\n", idades[i]);
	}

	return 0;
}
