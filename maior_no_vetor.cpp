#include <stdio.h>;
#include <locale.h>;
main(){
	setlocale(LC_ALL,"Portuguese");
	int maior=0, vetor[6]={6,3,5,45,12,25};
	for(int i=0;i<6;i++){
		if(maior<vetor[i]){
			maior=vetor[i];
		}
	}
	printf("O maior número desse vetor é %d :",maior);
}
