#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
setlocale(LC_ALL,"portuguese");

/*Utilizei somente numeros para o codigo, pois segui a 
logica de ser um sistema de segura�a para um edif�cio*/
int codigo = 10921;
int codigoPedido = 0;

do
{
    printf("Digite o c�digo de acesso: ");
    scanf("%d",&codigoPedido);

    if (codigoPedido != codigo)
    {
        printf("Acesso Negado ! C�digo Incorreto\nTente novamente...");
        sleep(3);
        system("cls || clear");
    }
    
} while (codigoPedido != codigo);


printf("Acesso Liberado !");

getchar();
return 0;
}