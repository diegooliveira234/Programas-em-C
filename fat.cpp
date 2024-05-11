#include <stdio.h>

int calcularFatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calcularFatorial(n - 1);
}

int main() {
    int numero, fatorial;
    printf("Insira um número inteiro positivo: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Erro: Não é possível calcular o fatorial de um número negativo.\n");
    }
    fatorial = calcularFatorial(numero);
    printf("O fatorial de %d é: %d\n", numero, fatorial);

}
