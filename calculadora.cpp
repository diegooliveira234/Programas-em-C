#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	printf("--- Calculadora ---");
	printf("\n[1]-Soma\n[2]-Subtração ");
	printf("\n[3]-Multiplicação \n[4]-Divisão ");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
		int n1,n2,soma;
		printf("Informe um número :\n ");
		scanf("%d",&n1);
		printf("Informe outro número :\n ");
		scanf("%d",&n2); 
		soma=n1+n2;
		printf("A soma é :%d ",soma);
		break;
		case 2:
		int n3,n4,sub;
		printf("Informe um número :\n ");
		scanf("%d",&n3);
		printf("Informe outro número :\n ");
		scanf("%d",&n4); 
		sub=n3-n4;
		printf("A subtração é :%d ",sub);
		break;
		case 3:
		int n5,n6,mult;
		printf("Informe um número :\n ");
		scanf("%d",&n5);
		printf("Informe outro número :\n ");
		scanf("%d",&n6); 
		mult=n5*n6;
		printf("A multplicação é :%d ",mult);
		break;
		case 4:
		int n7,n8,div;
		printf("Informe um número :\n ");
		scanf("%d",&n7);
		printf("Informe outro número :\n ");
		scanf("%d",&n8); 
		div=n7/n8;
		printf("A divisão é :%d ",div);
		break;
		default: printf("Insira uma opção válida...");
	}
}