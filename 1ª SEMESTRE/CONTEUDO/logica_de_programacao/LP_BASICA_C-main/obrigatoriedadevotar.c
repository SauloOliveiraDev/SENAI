#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int idade;
    
    printf("VERIFIQUE SE VOCÊ NECESSITA VOTAR\n");
    printf("   Digite qual a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18 && idade > 65)
    {
        printf("Você não precisa votar !");
    }
    else
    {
        printf("Você precisa votar !");
    } 
    
    /*if (idade >= 18 && idade <= 65)
    {
        printf("Você precisa votar !");
    }
    else
    {
        printf("Você não precisa votar !");
    }*/
    
    return 0;
    
}