#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,n3,maior=0;
	printf("Digite um n�mero positivo qualquer \n: ");
	scanf("%d",&n1);
	printf("Digite outro n�mero positivo qualquer \n: ");
	scanf("%d",&n2);
	printf("Digite  mais um n�mero positivo qualque \n: ");
	scanf("%d",&n3);
	maior=(n1>n2)?n1:n2;
	maior=(n2>n3)?n2:n3;
	printf("O maior n�mero � : %d",maior);
	
}
