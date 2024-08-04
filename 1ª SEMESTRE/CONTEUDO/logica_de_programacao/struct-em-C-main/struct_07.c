#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    struct registro_livros {
        char livro[200];
        char autor[200];
        char categoria[200];
        float preco;
    };
    
    struct registro_livros livros[3];
}