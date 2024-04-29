#include <stdio.h>;
#include <locale.h>;
#include <string.h>
main(){

	setlocale(LC_ALL, "Portuguese");
	char senha_usuario[15];
	const char senha_padrao[9]="abc*123";
	printf("Informe a senha : ");
	scanf("%s",&senha_usuario);
	if(strcmp(senha_usuario,senha_padrao)==0){
		printf("Acesso Concedido ");
	}else{
		printf("Acesso Negado ");
	}	
}