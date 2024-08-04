#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int numeros[5], i, impar = 0, par = 0;
    int negativos = 0, positivos = 0; 
    int maior = -999999, menor = 9999999;
    int somaPar = 0, somaImpar = 0, soma = 0;
    float mediaPar = 0, mediaImpar = 0, media = 0;
    
    for(i = 0; i < 5; i++){
        printf("Digite o %dª número: ", i + 1);
        scanf("%d", &numeros[i]);
        
        soma += numeros[i];
        
        if(numeros[i] %2 == 0){
            par++;
            somaPar += numeros[i];
        }else{
            impar++;
            somaImpar += numeros[i];
        }
        
        if(numeros[i] < 0){
            negativos++;
        }else if (numeros[i] > 0){
            positivos++;
        }
        
        maior = numeros[i] > maior ? numeros[i] : maior;
        menor = numeros[i] < menor ? numeros[i] : menor;
    
    }
    
    if(par > 0) {
    mediaPar = somaPar / (float) par;
    }
    if(impar > 0) {
    mediaImpar = somaImpar / (float) impar;
    }
    media = soma / (float) i;
    
    printf("Quantidade de números Pares: %d\n", par);
    printf("Quantidade de números Impar: %d\n", impar);
    printf("Quantidade de números Positivos: %d\n", positivos);
    printf("Quantidade de números Negativos: %d\n", negativos);
    printf("Quantidade de números: %d\n\n", i );
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n\n", menor);
    printf("Média dos números Pares: %.1f\n", mediaPar);
    printf("Média dos números Impar: %.1f\n", mediaImpar);
    printf("Média dos números: %.1f\n\n", media);
    printf("Números inseridos invertidos:\n");
    for(i = 4; i >= 0; i--){
        printf("%d\n", numeros[i]);
    }
    
    return 0;
}
