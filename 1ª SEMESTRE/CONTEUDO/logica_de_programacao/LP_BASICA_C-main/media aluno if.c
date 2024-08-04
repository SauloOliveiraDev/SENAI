#include <stdio.h>
#include <stdlib.h>

int main(){
    float segundaNota = 0;
    float primeiraNota = 0;
    float media = 0;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);
    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);

    system("cls || clear");
    
    media = (primeiraNota + segundaNota) / 2;
    
    //CODIGO EQUIVALENTE AO SE/SENAO |
    //                               V
    if (media >= 7)
    {
        printf("APROVADO\n");
    }
    else
    {
        printf("REPROVADO\n");
    }
    
    

    printf("PRIMEIRA NOTA: %.2f\n", primeiraNota);
    printf("PRIMEIRA NOTA: %.2f\n", segundaNota);
    printf("MEDIA: %.2f\n", media);

}
