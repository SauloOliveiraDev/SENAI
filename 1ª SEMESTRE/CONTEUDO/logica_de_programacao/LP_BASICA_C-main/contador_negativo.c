#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int numeros[5], i;
    
    for(i = 0; i < 5; i++){
        
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if(numeros[i] < 0){
            numeros[i] = 0;
        }
    }
    
    system("cls || clear");
    
    for(i = 0; i < 5; i++){
        printf("%d\n",numeros[i]);
    }
    
    getchar ();
    return 0;
}
