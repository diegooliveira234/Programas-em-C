#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
/*Desenvolva uma função denominada "calcularAreaRetangulo" 
que recebe a base e a altura de um retângulo como parâmetros e retorna a área desse retângulo.*/

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

