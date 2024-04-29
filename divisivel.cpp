#include <stdio.h>;
#include <locale.h>;
main(){

	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Informe um número positivo e maior que 0: ");
	scanf("%d",&numero);
		if(numero%5==0){
			printf("Divisível por 5 ");
		}else{
			printf("Não divisível por 5 ");
		}
	}
