#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	if(idade>=16){
		printf("Pode votar ");
	}else{
		printf("Não pode votar ");
	}
}
