#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int idade;
    
    printf("VERIFIQUE SE VOC� NECESSITA VOTAR\n");
    printf("   Digite qual a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18 && idade > 65)
    {
        printf("Voc� n�o precisa votar !");
    }
    else
    {
        printf("Voc� precisa votar !");
    } 
    
    /*if (idade >= 18 && idade <= 65)
    {
        printf("Voc� precisa votar !");
    }
    else
    {
        printf("Voc� n�o precisa votar !");
    }*/
    
    return 0;
    
}