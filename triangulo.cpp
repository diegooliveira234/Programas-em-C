#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
/*Desenvolva uma fun��o denominada "calcularAreaRetangulo" 
que recebe a base e a altura de um ret�ngulo como par�metros e retorna a �rea desse ret�ngulo.*/

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

