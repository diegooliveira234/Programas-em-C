#include <stdio.h>;
#include <locale.h>;
main(){

	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Informe um número qualquer: ");
	scanf("%d",&numero);
	if(numero>=10){
		printf("Maior ou igual a 10");
	}else{
		printf("Menor que 10 ");
	}
}

