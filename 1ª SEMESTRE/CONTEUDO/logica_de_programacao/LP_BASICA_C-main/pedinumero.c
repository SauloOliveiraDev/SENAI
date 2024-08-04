#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int nota, i = 0, soma = 0;
    float media = 0;
    char resposta;
    
    do {
        printf("Digite 'N' para para o programa caso deseje inserir a %dª nota digite qualquer outra letra: \n", i+1 );
        nota = toupper(nota);
        
        scanf("%c",&resposta);
        fflush(stdin);
        
        if (resposta != 'N') {
        
        printf("Digite a %dª nota: ", i+1);
        scanf("%d",&nota);
        
        fflush(stdin);
        system("cls || clear");

        i++;
        soma += nota;
        }
    } while (resposta != 'N');
        media = soma / (float) i;

        system("cls || clear");
        printf("Media dos números: %.2f", media);
    
}