#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
//Crie uma fun��o chamada "calcularSoma" que recebe dois n�meros inteiros como par�metros e retorna a soma desses n�meros.
int calcularSoma(int n1, int n2){
	int soma=n1+n2;
	return soma;
}

main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	printf("Informe um n�mero para soma : ");
	scanf("%d",&n1);
	printf("Informe outro n�mero para soma : ");
	scanf("%d",&n2);
	printf(" A soma � :%d ",calcularSoma(n1,n2));
}

