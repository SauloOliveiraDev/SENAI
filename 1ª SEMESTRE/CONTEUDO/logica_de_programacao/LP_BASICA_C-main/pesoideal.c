#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char sexo;
    float altura, pesoideal, peso;

    printf("BEM-VINDO(A) A CALCULADORA DE PESO IDEAL\n");
    printf("\nM - Masculino\nF - Feminino\nDigite qual o seu g�nero: \n");
    scanf("%c", &sexo);

    fflush(stdin);

    printf("Agora informe a sua altura: \n");
    scanf("%f", &altura);

    fflush(stdin);

    printf("Informe seu peso: \n");
    scanf("%f", &peso);

    fflush(stdin);

    sexo = toupper(sexo); //    DEIXANDO LETRA MINUSCULA EM MAIUSCULA

    switch (sexo){
    case 'M':
        pesoideal = (72.7 * altura) - 58;
        break;
    case 'F':
        pesoideal = (62.1 * altura) - 44.7;
        break;
    }

    system("cls || clear");

    if (peso > pesoideal){
        printf("Voc� est� acima do seu peso ideal !!!\n");
    }
    else if (peso < pesoideal){
        printf("Voc� est� abaixo do seu peso ideal !!!\n");
    }
    else{
        printf("Voc� est� em seu peso ideal !!!\n");
    }

    printf("\nSua altura: %.2f\n", altura);
    printf("Seu peso ideal �: %.2f\n", pesoideal);

    getchar();
    return 0;
}