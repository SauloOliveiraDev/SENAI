#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int resposta, idade, contador = 0, idadeMaior = 0, contadorMulher = 0, idadeMenor = 10000000;
    char sexo;
    float salario = 0, somaGeral = 0, mediaSalario = 0;

    do
    {
        fflush(stdin);
        printf("Código |\tDescrição\n1      |\tAdicionar pessoas\n2      |\tSair e exibir resultados\n\nDigite o código da sua escolha: ");
        scanf("%d", &resposta);
        
        fflush(stdin);

        if (resposta == 1)
        {
            printf("\nM - Masculino\nF - Feminino\nQual o seu sexo ? ");
            scanf("%c", &sexo);

            fflush(stdin);

            printf("\nQual a sua idade ? ");
 
            scanf("%d",&idade);

            printf("\nQuanto é o seu salário ? ");
            scanf("%f",&salario);

            system("cls || clear");

            contador ++;

            somaGeral += salario;

            idadeMaior = idade > idadeMaior ? idade : idadeMaior;
            idadeMenor = idade < idadeMenor ? idade : idadeMenor;
            
          sexo = toupper(sexo);
        if (sexo == 'F' && salario > 5000.00)
            {
                contadorMulher ++;
            }
        }else if(resposta != 1 && resposta != 2){
            printf("Código Inválido\nTente novamente...\n\n");
            sleep(3);
            system("cls || clear");
           
        }
        
    } while (resposta != 2);

    mediaSalario = somaGeral / contador;

    system("cls || clear");

    printf("Média salarial do grupo: %.2f\n", mediaSalario);
    printf("Maior idade do grupo: %d\nMenor idade do grupo: %d\n", idadeMaior, idadeMenor);
    printf("Quantidade de mulheres com salário acima de R$ 5.000,00: %d\n", contadorMulher);
}