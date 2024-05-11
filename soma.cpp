#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
//Crie uma função chamada "calcularSoma" que recebe dois números inteiros como parâmetros e retorna a soma desses números.
int calcularSoma(int n1, int n2){
	int soma=n1+n2;
	return soma;
}

main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	printf("Informe um número para soma : ");
	scanf("%d",&n1);
	printf("Informe outro número para soma : ");
	scanf("%d",&n2);
	printf(" A soma é :%d ",calcularSoma(n1,n2));
}

