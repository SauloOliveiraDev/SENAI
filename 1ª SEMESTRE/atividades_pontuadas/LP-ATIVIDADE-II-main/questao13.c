#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int numero, numeroDois, maior, menor;

printf("Digite um n�mero: ");
scanf("%d",&numero);

printf("Digite outro n�mero: ");
scanf("%d",&numeroDois);

maior = numero > numeroDois ? numero : numeroDois;
menor = numero < numeroDois ? numero : numeroDois;

printf("Maior n�mero: %d\n", maior);
printf("Menor n�mero: %d\n", menor);

getchar();
return 0;
}