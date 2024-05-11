#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
//Desenvolva um procedimento denominado "calcularMedia" que recebe três notas como parâmetros e calcula e imprime a média aritmética dessas notas.

void calcularMedia(int n1,int n2,int n3){
	int media=(n1+n2+n3)/3;
	printf("A média dos números fornecidos é %d : ",media);
}
main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,n3;
	printf("Informe um número para média : ");
	scanf("%d",&n1);
	printf("Informe outro número para média : ");
	scanf("%d",&n2);
	printf("Informe outro número para média : ");
	scanf("%d",&n3);
	calcularMedia(n1,n2,n3);
}
