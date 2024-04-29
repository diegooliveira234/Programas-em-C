#include <stdio.h>;
#include <locale.h>;
main(){

	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Informe um número qualquer: ");
	scanf("%d",&numero);
		if(numero%2==0){
			printf("Número par ");
		}else{
			printf("Número impar ");
		}
	}
