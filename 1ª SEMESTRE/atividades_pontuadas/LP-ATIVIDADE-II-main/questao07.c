#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int opcao;

printf("1 - Novo Jogo\n2 - Carregar Jogo\n3 - Configura��es\n\n");
printf("Selecione a op��o desejada: ");
scanf("%d",&opcao);

switch (opcao) {
case 1:
    printf("Novo jogo Iniciado !");
    break;

case 2:
	printf("Carregando jogo...");
	break;
	
case 3: 
	printf("Entrando nas configura��es");
	break;
}

}
