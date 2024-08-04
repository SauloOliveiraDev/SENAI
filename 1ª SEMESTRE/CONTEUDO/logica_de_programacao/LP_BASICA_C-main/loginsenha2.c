#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    char login[200];
    char loginsalvo[200];
    char senha[200];
    char senhasalva[200];
   
    printf("BEM-VINDO REGISTRE A SUA CONTA\n");
    
    printf("Digite qual o login desejado: ");
    gets(loginsalvo);
    
    printf("Digite qual a senha desejada: ");
    gets(senhasalva);

    system("cls || clear");
    
    do {
       printf("Digite qual o seu login: ");
       gets(login);

       printf("Digite qual a sua senha: ");
       gets(senha);

       if (strcmp(login, loginsalvo) != 0 || strcmp(senha, senhasalva) != 0) {
         printf("Login ou Senha inválidos !\nTente novamente...");
         sleep(3);
         system("cls || clear");
       } else {
        printf("Acesse Liberado !");
       }
       
    } while (strcmp(login, loginsalvo) != 0 || strcmp(senha, senhasalva) != 0);

   
}