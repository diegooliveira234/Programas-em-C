#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
//Desenvolva um procedimento denominado "calcularMedia" que recebe tr�s notas como par�metros e calcula e imprime a m�dia aritm�tica dessas notas.

void calcularMedia(int n1,int n2,int n3){
	int media=(n1+n2+n3)/3;
	printf("A m�dia dos n�meros fornecidos � %d : ",media);
}
main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,n3;
	printf("Informe um n�mero para m�dia : ");
	scanf("%d",&n1);
	printf("Informe outro n�mero para m�dia : ");
	scanf("%d",&n2);
	printf("Informe outro n�mero para m�dia : ");
	scanf("%d",&n3);
	calcularMedia(n1,n2,n3);
}
