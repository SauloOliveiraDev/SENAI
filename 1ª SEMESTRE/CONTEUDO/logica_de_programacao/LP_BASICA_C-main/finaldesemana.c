#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "portuguese");
    int diasemana;

    printf("Digite um número que represente um dia da semana: ");
    scanf("%d", &diasemana);

    switch (diasemana)
    {
    case 1:
        printf("Final de semana !");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia útil !");
        break;
    case 7:
        printf("Final de semana !");
        break;
    default:
        printf("O número digitado não representa um dia da semana !!!");
        break;
    }

    return 0;
}