#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    int temperatura;
    char clima[200];
    
    setlocale(LC_ALL,"portuguese");
    
    printf("Digite a temperatura: ");
    scanf("%d",&temperatura);
    
    if(temperatura > 25){
        strcpy(clima, "O clima est� ensolarado !");
    } else if(temperatura <= 25 && temperatura >= 15){
        strcpy(clima, "O clima est� nublado !");
    } else{
        strcpy(clima, "O clima est� chuvoso !");
    }

    printf("%s", clima);

    getchar();
    return 0;
}

