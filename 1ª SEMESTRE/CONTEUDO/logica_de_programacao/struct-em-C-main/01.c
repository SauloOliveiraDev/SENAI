#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct registro_livro {
    char livro[200];
    char autor[200];
    char categoria[200];
    float preco;
};

int main() {
    setlocale(LC_ALL, "portuguese");
    int i;
    struct registro_livro livros[3];

    for ( i = 0; i < 3; i++) {
        printf("Digite o nome do %dª livro: ", i + 1);
        gets(livros[i].livro);

        printf("Digite o nome do autor: ");
        gets(livros[i].autor);

        printf("Digite a categoria do livro: ");
        gets(livros[i].categoria);

        printf("Digite o preço do livro: ");
        scanf("%f", &livros[i].preco);

        system("cls || clear");
        fflush(stdin);
    }
    
    for ( i = 0; i < 3; i++) {
        printf("%dª livro: %s\n", i + 1, livros[i].livro);
        printf("Autor: %s\n", livros[i].autor);
        printf("Categoria: %s\n", livros[i].categoria);
        printf("Preço: R$ %.2f\n\n", livros[i].preco);
    }  

    return 0;  
}