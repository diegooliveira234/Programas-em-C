#include <stdio.h>;
#include <locale.h>;
main(){

	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Informe um número positivo qualquer:  ");
	scanf("%d",&numero);
		if(numero>=0 & numero<=100){
			printf("Número informado está entre 0 e 100 ");
		}else{
			printf("Número informado não está entre 0 e 100");
		}
	}
