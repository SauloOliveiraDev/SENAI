#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int idioma;

printf("\t1 - Ingl�s\n\t2 - Espanhol\n\t3 - Franc�s\nDigite o c�digo da linguagem desejada: ");
scanf("%d",&idioma);	

if(idioma == 1){
	printf("Welcome !");
}else if(idioma == 2){
	printf("Bienvenido !");
}else if(idioma == 3){
	printf("Accueillir !");
}

return 0;
}
