#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    
    float nota;
    char resultado[80];
 	
 	printf("Digite a nota do aluno: ");
 	scanf("%f", &nota);
 	
 	if(nota >= 9){
 		strcpy(resultado, "Exelente !");
	} else if(nota >= 7 && nota <9){
 		strcpy(resultado, "Bom !");
	} else if(nota >= 5 && nota < 7){
 		strcpy(resultado, "Razo�vel !");
 	}else if(nota < 5){
 		strcpy(resultado, "Insuficiente !");		
	}else{
		printf("Nota selecionada inv�lida");
	}
	
	system("cls || clear");
	
	printf("Sua classifica��o foi: %s", resultado);
getchar();
return 0;
}
