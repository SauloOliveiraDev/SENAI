#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
 	
 	int diasemana, semana, i;
 	float desconto, valor, valorFinal;
 	
	printf("1 - Segunda\n2 - Ter�a\n3 - Quarta\n4 - Quinta\n5 - Sexta\n6 - S�bado\n7 - Domingo\nDigite qual c�digo referente ao dia da semana de hoje: ");
	scanf("%d",&diasemana);
	
	system("cls || clear");
	
	if(diasemana == 1 || diasemana == 2 || diasemana == 3 || diasemana == 4){
		desconto = 0.1;
		i = 1;
	}else if(diasemana == 5 || diasemana == 6 || diasemana == 7){
		desconto = 0.15;
		i = 2;
	}else{
		printf("Dia da sema selecionado � inv�lido !");
	}
	
	printf("Digite qual o valor da sua compra: ");
	scanf("%f",&valor);
	
	system("cls || clear");
	
	if(valor > 100 && i == 1){
		valorFinal = (valor * desconto);
		valorFinal = valor - valorFinal;
		
	}else if(valor > 100 && i == 2){
		valorFinal = (valor * desconto);
		valorFinal = valor - valorFinal;	
	}else{
		valorFinal = valor;
	}
	
	printf("Valor a ser pago: %.2f", valorFinal);
	
	getchar();
	return 0;
}
