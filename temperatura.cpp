#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
/*Escreva um procedimento em C chamado "converterTemperatura" que recebe uma temperatura em 
Celsius como parâmetro e imprime essa temperatura convertida para Fahrenheit.
*/
void converterTemperatura(int celsius){
	int fah; 
	fah= (celsius *1.8)+32;
	printf("%d em Fahrenheit = %d F",celsius,fah);
}


main(){
	setlocale(LC_ALL,"Portuguese");
	int cel;
	printf("Informe uma temperatura em Celsius : ");
	scanf("%d",&cel);
	converterTemperatura(cel);
}

