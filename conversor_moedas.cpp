#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL,"Portuguese_BR");
	float dolar,real,cotacao;
	int opcao;
	printf("--- Conversor de Moedas---\n");
	printf(" [1]Dolar -> Real \n [2]Real -> Dolar ");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			printf("Informe quantos dolares possui: ");
			scanf("%f",&dolar);
			printf("Informe a cotação atual :");
			scanf("%f",&cotacao);
			real=dolar/cotacao;
			printf("Esse valor de US %3.2f, é igual a R$ %3.2f",dolar,real);
		case 2:
			printf("Informe quantos reais possui: ");
			scanf("%f",&real);
			printf("Informe a cotação atual :");
			scanf("%f",&cotacao);
			dolar=real*cotacao;
			printf("Esse valor de R$ %3.2f, é igual a U$ %3.2f",real,dolar);
	}
}