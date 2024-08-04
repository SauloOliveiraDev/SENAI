/*#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[200];
    int idade;

    printf("=================================\n");
    printf("\t    Senai\n");
    printf("=================================\n\n");

    printf("Digite o seu nome: ");
    gets(nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    system("cls || clear");

    printf("=================================\n");
    printf("\t    Senai\n");
    printf("=================================\n\n");
    
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
    printf("=================================\n");
    printf("\t    Senai\n");
    printf("=================================\n\n");
}

int main(){
    char nome[200];
    int idade;

    cabecalho();

    printf("Digite o seu nome: ");
    gets(nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    system("cls || clear");

    cabecalho ();
    
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    return 0;
}