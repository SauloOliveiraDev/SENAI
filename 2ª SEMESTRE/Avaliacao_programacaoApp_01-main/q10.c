#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float notas[5];
    float somaNotas = 0;
    float media = 0;
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("DIgite a %d� nota: ", i + 1);
        scanf("%f", &notas[i]);

        somaNotas += notas[i];
    }

    media = somaNotas / 5;

    if (media >= 7)
    {
        printf("APROVADO !\nSEM RECUPERA��O");
    }
    else if (media >= 4)
    {
        printf("REPROVADO !\nCOM DIREITO A RECUPERA��O");
    }
    else
    {
        printf("REPROVADO !\nSEM DIREITO A RECUPERA��O");
    }
    
    
}