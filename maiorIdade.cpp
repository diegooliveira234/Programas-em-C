#include <stdio.h>;
#include <locale.h>;
main(){

	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Informe sua idade: ");
	scanf("%d",&idade);
		if(idade>=18){
			printf("Maior de idade ");
		}else{
			printf("Menor de idade");
		}
	}
