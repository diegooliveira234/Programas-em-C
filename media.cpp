#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int media,nota1,nota2;
	printf("Informe a nota 1 do aluno(a) :");
	scanf("%d",&nota1);
	printf("Informe a nota 2 do aluno(a) :");
	scanf("%d",&nota2);
	media=(nota1+nota2)/2;
	printf("A média é :%d",media);
	return 0;
}