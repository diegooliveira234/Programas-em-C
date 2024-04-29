#include <stdio.h>;
#include <locale.h>;
main(){
	int idade;
	printf("Informe a sua idade : ");
	scanf("%d",&idade);
	switch(idade){
		case 0 ... 12:printf("Infantil");
		break;
		case 13 ... 17:printf("Juvenil");
		break;
		case 18 ... 99:printf("Adulto");
		break;
		default:printf("Digite uma idade válida...");
	}
}