#include <stdio.h>

int calcularFatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calcularFatorial(n - 1);
}

int main() {
    int numero, fatorial;
    printf("Insira um n�mero inteiro positivo: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Erro: N�o � poss�vel calcular o fatorial de um n�mero negativo.\n");
    }
    fatorial = calcularFatorial(numero);
    printf("O fatorial de %d �: %d\n", numero, fatorial);

}
