#include <stdio.h>;
#include <locale.h>;
#include <string.h>;
//Implemente um procedimento chamado "imprimirNumerosPares" que imprime todos os números pares de 1 a 20.

void imprimirNumerosPares(){
	for(int i=1;i<=20;i++){
		if(i%2==0){
			printf("\n %d",i);
		}
	}
}
main(){
	setlocale(LC_ALL,"Portuguese");
	imprimirNumerosPares();
}
