#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int numero, i;

printf("Digite um n�mero: ");
scanf("%d",&numero);

for ( i = numero; i >= 0; i--) {
	printf("%d\n",i);
}

}
