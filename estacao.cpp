#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL, "Portuguse");
	int mes;
	printf("Informe um número de 1 a 12 e descubra a estação do ano: ");
	scanf("%d",&mes);
	switch(mes){
		case 12:case 1:case 2: 
		 printf("Verão");
		break;
		case 3:case 4:case 5: 
		printf("Outono");
		break;
		case 6:case 7:case 8: 
		printf("Inverno");
		break;
		case 9:case 10:case 11: 
		printf("Primavera");
		break;
		default: printf("Por favor escolha uma opção válida...");
	}
}
