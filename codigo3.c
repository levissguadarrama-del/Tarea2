#include <stdio.h>

int main() {
    float dolares, pesos;

    printf("Ingresa la cantidad de dolares: ");
    scanf("%f", &dolares);

    pesos = dolares * 11.96;

    printf("La cantidad en pesos es: %.2f\n", pesos);

    return 0;
}
