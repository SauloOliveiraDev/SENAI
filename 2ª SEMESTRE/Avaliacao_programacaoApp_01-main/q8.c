#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade > 18)
    {
        printf("ACESSO LIBERADO !");
    }
    else
    {
        printf("ACESSO NEGADO !");
    }
    
}