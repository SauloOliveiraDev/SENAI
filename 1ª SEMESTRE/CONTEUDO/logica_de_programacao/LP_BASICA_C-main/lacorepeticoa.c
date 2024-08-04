#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i, j;
    
    /*for (i = 1; i <= 10; i =  i + 1){
        printf("%d x 3 = %d\t %d x 5 = %d\t %d x 7 = %d \n", i, i *3, i, i *5,i, i*7);
    }*/

    /*for ( j = 3; j <= 7; j += 2){
        for (i = 1; i <= 10; i++){
            printf("%d x %d = %d \n\n", j, i, i * j);
        }
        
    }*/

    for ( j = 10; j >= 1; j -= 1){
        for (i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", j, i, i * j);
        }
        
    }
    


    
    
    
    
    getchar();
    return 0;
}