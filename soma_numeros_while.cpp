#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL,"Portuguese");
	int numero=0,soma=0;
	while(numero>=0){
	printf("Insira um número: ");
	scanf("%d",&numero);
		if(numero>=0){
			soma+=numero;
		}
	}
	printf("A soma dos números informados é : %d",soma);
}
