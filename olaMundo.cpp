#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
//Crie um procedimento chamado "imprimirTabuada" que recebe um n�mero inteiro como par�metro e imprime a tabuada desse n�mero at� 10.

void imprimirTabuada(int numero){
	for(int i=1;i<=10;i++){
		int resultado=numero*i;
		printf("\n %d X %d = %d ",numero,i,resultado);
	}
}
main(){
	setlocale(LC_ALL,"Portuguese");
	int numero_cliente;
	printf("Informe um n�mero maior que 0 para tabuada : ");
	scanf("%d",&numero_cliente);
	imprimirTabuada(numero_cliente);
}
