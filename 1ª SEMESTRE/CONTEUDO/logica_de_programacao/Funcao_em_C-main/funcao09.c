#include <stdio.h>
#include <stdlib.h>

float conversaoCentimetros(float a){
    return a * 100;
}

int main(){
    float valorMetros;
    float centimetros;

    printf("Digite um valor em metros: ");
    scanf("%f", &valorMetros);

    conversaoCentimetros(valorMetros);
    centimetros = conversaoCentimetros(valorMetros);

    printf("Conversao de %.1f m em cm: %.1f", valorMetros, centimetros);
}