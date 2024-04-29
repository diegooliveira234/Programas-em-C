#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL,"Portuguese");
	char letra;
	printf("Insira uma letra : ");
	scanf("%c",&letra);
	switch(letra){
		case 'a':case 'A':case 'e':case'E':
			case 'i':case 'I':case 'o':case'O':
				case 'u':case 'U':
		printf("Vogal");
		break;
		
		default:printf("Consoante");
	}
}
