#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    char nome[50];
    float primeiraNota;
    float segundaNota;
    float terceiraNota;

    printf("Digite o seu nome : ");
    gets(nome);

    printf("Digite uma nota sua : ");
    scanf("%f", &primeiraNota);
    
    printf("Digite  mais uma nota sua : ");
    scanf("%f", &segundaNota);
    
    printf("Digite outra nota sua : ");
    scanf("%f", &terceiraNota);

    system("cls || clear");
    
    printf("ALUNO : %s\n", nome);

    if (((primeiraNota + segundaNota + terceiraNota) / 3 ) >= 7 )
    {
        printf("VOCÊ FOI APROVADO !\n\n");
    }
    else
    {
        printf("VOCÊ FOI REPROVADO !\n\n");
    }
    
}