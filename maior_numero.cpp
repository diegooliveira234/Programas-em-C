#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,n3,maior=0;
	printf(" Digite um número positivo qualquer : ");
	scanf("%d",&n1);
	printf("\n Digite outro número positivo qualquer : ");
	scanf("%d",&n2);
	printf("\n Digite  mais um número positivo qualque : ");
	scanf("%d",&n3);
	maior=(n1>n2)?n1:n2;
	maior=(n2>n3)?n2:n3;
	maior=(n3>n1)?n3:n1;
	maior=(n1>n3)?n1:n3;
	maior=(n3>n2)?n3:n2;
	maior=(n2>n1)?n2:n1;
	maior=(n3>n2)?n3:n2;
	printf("O maior número é : %d",maior);
}
