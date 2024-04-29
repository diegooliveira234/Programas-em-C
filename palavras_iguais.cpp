#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
main(){
	setlocale(LC_ALL,"Portuguese");
	char p1[15],p2[15];
	printf("Informe uma palavra: ");
	scanf("%s",p1);
	printf("Informe outra palavra: ");
	scanf("%s",p2);
	if(strcmp(p1,p2)==0){
		printf("Strings Iguais ");
	}else {
		printf("Strings Diferentes");
	}
}
