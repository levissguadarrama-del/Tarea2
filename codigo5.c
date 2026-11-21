#include <stdio.h>

int main() {
    float compra, descuento, total;

    printf("Ingresa el monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 2500) {
        descuento = compra * 0.08;
        total = compra - descuento;
    }
    else {
        total = compra;
    }

    printf("El total a pagar es: %.2f\n", total);

    return 0;
}
