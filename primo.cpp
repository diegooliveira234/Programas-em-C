#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
Implemente uma fun��o chamada "verificarNumeroPrimo" que recebe um n�mero inteiro como par�metro e retorna 1 se o n�mero for primo e 0 caso contr�rio.

int calcularAreaRetangulo(int base, int altura){
	int area=base*altura;
	return area;
}

main(){
	setlocale(LC_ALL,"Portuguese");
	int base,altura;
	printf("Informe a base do ret�ngulo : ");
	scanf("%d",&base);
	printf("Informe a altura do ret�ngulo : ");
	scanf("%d",&altura);
	printf(" A �rea do ret�ngulo � :%d ",calcularAreaRetangulo(base,altura));
}
jbdjkdas
