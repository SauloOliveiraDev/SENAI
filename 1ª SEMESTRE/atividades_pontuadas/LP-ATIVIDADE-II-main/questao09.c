#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int numero, i, resultado = 0;

printf("Digite um n�mero: ");
scanf("%d",&numero);
	
 for (i = 1; i <= numero; i++) {
    if (numero % i == 0) {
       resultado++;
    }
 }

if(resultado == 2){
	printf("%d � primo\n",numero);
}else{
	printf("%d n�o � primo\n",numero);
}


}
