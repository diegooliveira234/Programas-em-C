#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL, "Portuguse");
	int dia;
	printf("Informe um número de 1 a 7 e descubra o dia da semana: ");
	scanf("%d",&dia);
	switch(dia){
		case 1: printf("Domingo");
		break;
		case 2: printf("Segunda-Feira");
		break;
		case 3: printf("Terça-Feira");
		break;
		case 4: printf("Quarta-Feira");
		break;
		case 5: printf("Quinta-Feira");
		break;
		case 6: printf("Sexta-Feira");
		break;
		case 7: printf("Sábado");
		break;
		default: printf("Por favor escolha uma opção válida...");
	}
}
