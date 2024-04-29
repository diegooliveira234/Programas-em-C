#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL, "Portuguse");
	int opcao;
	printf("--- Bem vindo ao Banco do Senai --- \n");
	printf("Escolha uma opção \n [1]Extrato \n");
	printf(" [2]Saldo na Tela \n [3]Saque \n ");
	printf("[4]Deposito \n [5]Sair\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1: printf("Extrato sendo gerado...");
		break;
		case 2: printf("Saldo na tela sendo gerado...");
		break;
		case 3: printf("Saque sendo gerado...");
		break;
		case 4: printf("Depósito sendo gerado...");
		break;
		case 5: printf("Saindo...");
		break;
		default: printf("Por favor escolha uma opção válida...");
	}
}