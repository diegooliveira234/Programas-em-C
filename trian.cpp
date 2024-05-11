#include <stdio.h>

int verificarTriangulo(int lado1, int lado2, int lado3) {
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
        return 1; 
    else
        return 0; 
}

int main() {
    int lado1, lado2, lado3;
    int resultado;
    printf("Insira os três lados do triângulo:\n");
    printf("Lado 1: ");
    scanf("%d", &lado1);
    printf("Lado 2: ");
    scanf("%d", &lado2);
    printf("Lado 3: ");
    scanf("%d", &lado3);
    resultado = verificarTriangulo(lado1, lado2, lado3);

    if (resultado == 1)
        printf("Os lados formam um triângulo válido.\n");
    else
        printf("Os lados NÃO formam um triângulo válido.\n");
}
