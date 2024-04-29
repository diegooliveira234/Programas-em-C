#include <stdio.h>;
#include <locale.h>;
main(){
	int ano;
	printf("Informe o ano de nascimento : ");
	scanf("%d",&ano);
	switch(ano){
		case 1965 ... 1980:printf("Geração X");
		break;
		case 1981 ... 1996:printf("Geração Y, Millennials");
		break;
		case 1997 ... 2010:printf("Geração Z");
		break;
		default:printf("Digite um ano válida...");
	}
}