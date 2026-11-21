#include <stdio.h>

int main() {
    float distancia, precio, total;
    int dias;

    printf("Ingresa la distancia de ida en km: ");
    scanf("%f", &distancia);

    printf("Ingresa los dias de estancia: ");
    scanf("%d", &dias);

    precio = distancia * 2 * 0.23;

    if (dias > 7 && distancia * 2 > 800) {
        total = precio - (precio * 0.30);
    }
    else {
        total = precio;
    }

    printf("El precio del ticket es: %.2f\n", total);

    return 0;
}
