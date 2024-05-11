#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
Implemente uma função chamada "verificarNumeroPrimo" que recebe um número inteiro como parâmetro e retorna 1 se o número for primo e 0 caso contrário.

int calcularAreaRetangulo(int base, int altura){
	int area=base*altura;
	return area;
}

main(){
	setlocale(LC_ALL,"Portuguese");
	int base,altura;
	printf("Informe a base do retângulo : ");
	scanf("%d",&base);
	printf("Informe a altura do retângulo : ");
	scanf("%d",&altura);
	printf(" A área do retângulo é :%d ",calcularAreaRetangulo(base,altura));
}
jbdjkdas
