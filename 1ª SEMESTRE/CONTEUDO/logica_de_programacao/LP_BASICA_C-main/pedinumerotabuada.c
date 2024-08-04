#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int numpedido, i;

    printf("Digite um número: ");
    scanf("%d", &numpedido);

    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n\n", numpedido, i, i * numpedido);
    }
    
getchar ();
return 0;
}