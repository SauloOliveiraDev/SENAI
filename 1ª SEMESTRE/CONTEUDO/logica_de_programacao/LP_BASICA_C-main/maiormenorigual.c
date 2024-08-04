#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // ACEITA ACENTUAÇÃO


int main()
{

    setlocale(LC_ALL, "portuguese"); // ACEITA ACENTUAÇÃO

    int primeiroNumero = 0;

    printf("Digite um número: ");
    scanf("%d", &primeiroNumero);

    system("cls || clear");

    if (primeiroNumero > 10) {
        printf("O NUMERO: %d, E MAIOR QUE 10!\n", primeiroNumero);
    } else if (primeiroNumero > 5) {
        printf("O NUMERO: %d, E MAIOR QUE 5!\n", primeiroNumero);
    } else if (primeiroNumero > 3) {
        printf("O NUMERO: %d, E MAIOR QUE 3!\n", primeiroNumero);
    } else {
        printf("O NUMERO: %d, E MENOR QUE 3!\n", primeiroNumero);
    }

    return 0;
}