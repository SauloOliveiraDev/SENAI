#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char nome[200];
    int diasIdo;
    int diasDeAula;
    float porcentagem;
    float media;

    printf("Digite o nome do aluno: ");
    gets(nome);

    printf("Digite a quantidade de dias uteis do curso do aluno: ");
    scanf("%d", &diasDeAula);

    printf("Agora digite quantos dias o aluno compareceu: ");
    scanf("%d", &diasIdo);

    porcentagem = ((float)diasIdo / diasDeAula) * 100;

    printf("Digite a média do aluno: ");
    scanf("%f", &media);

    if (porcentagem > 75 && media >= 7.0)
    {
        printf ("O aluno %s foi APROVADO !", nome);
    }
    else
    {
       printf ("O aluno %s foi REPROVADO !", nome); 
    }
    
}