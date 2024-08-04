#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    struct dados_usuario
    {
        char nome[200];
        int idade;
        char enderco[200];
    };

    struct dados_usuario usuario;

    printf("Digite o seu nome: ");
    gets(usuario.nome);

    printf("Digite a idade: ");
    scanf("%d", &usuario.idade);

    fflush(stdin);

    printf("Digite o seu endereço: ");
    gets(usuario.enderco);

    printf("\nExibindo os dados...\n\n");

    printf("Nome: %s\n", usuario.nome);
    printf("Idade: %d\n", usuario.idade);
    printf("Endereço: %s\n", usuario.enderco);
    
}