#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int primeiroNumero = 0;

    printf("Digite um numero: ");
    scanf("%d", &primeiroNumero);

    system("cls || clear");

    if (primeiroNumero > 10)
    {
        printf("O NUMERO: %d, E MAIOR QUE 10!", primeiroNumero);
    }
    else
    {
        printf("O NUMERO: %d, NAO E MAIOR QUE 10!", primeiroNumero);
    }
    
    return 0;

}