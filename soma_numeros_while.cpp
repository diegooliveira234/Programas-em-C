#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL,"Portuguese");
	int numero=0,soma=0;
	while(numero>=0){
	printf("Insira um n�mero: ");
	scanf("%d",&numero);
		if(numero>=0){
			soma+=numero;
		}
	}
	printf("A soma dos n�meros informados � : %d",soma);
}
