#include <stdio.h>;
#include <locale.h>;
main(){
	int nota;
	printf("Atribua uma nota de 1 a 5 para o atendimento realizado : ");
	scanf("%d",&nota);
	switch(nota){
		case 1:printf("Péssimo");
		break;
		case 2:printf("Ruim");
		break;
		case 3:printf("Moderado");
		break;
		case 4:printf("Bom");
		break;
		case 5:printf("Excelente");
		break;
		default: printf("Insira uma nota válida...");
	}
}
