#include <stdio.h>;
#include <locale.h>;
main(){
	/*Escreva um código que verifica se uma
	senha é igual a "1234". 
	Se for, imprima "Acesso concedido".*/
	setlocale(LC_ALL, "Portuguese");
	int senha;
	printf("Informe a senha : ");
	scanf("%d",&senha);
	if(senha==1234){
		printf("Acesso Permitido ");
	}else{
		printf("Acesso Negado");
	}	
}