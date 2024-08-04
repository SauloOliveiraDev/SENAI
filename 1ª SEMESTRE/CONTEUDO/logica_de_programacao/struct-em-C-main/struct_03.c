#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    
    struct fixa {
    char nome[200];
    int idade;
    float peso;
    float altura;
    };
    struct fixa fixa[5];


    for ( i = 0; i < 5; i++) {
    printf("Digite seu nome: ");
    gets(fixa[i].nome);

    printf("Digite a sua idade: ");
    scanf("%d", &fixa[i].idade);

    printf("Digite o seu peso: ");
    scanf("%f", &fixa[i].peso);
    
    printf("Digite a sua altura: ");
    scanf("%f", &fixa[i].altura);

    fflush(stdin);  
    printf("\n");  
    }
    

    printf("Exibindo dados...\n\n");

    for ( i = 0; i < 5; i++) {
    printf("Nome: %s\n", fixa[i].nome);
    printf("Idade: %d\n", fixa[i].idade);
    printf("Peso: %.2f\n", fixa[i].peso);
    printf("Altura: %.2f\n", fixa[i].altura);
    printf("\n");
    }

    return 0;
}