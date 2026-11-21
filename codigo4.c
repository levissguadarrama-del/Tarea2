#include <stdio.h>

int main() {
    float capital, tasa, interes, monto;

    printf("Ingresa la cantidad invertida: ");
    scanf("%f", &capital);

    printf("Ingresa la tasa de interes mensual (porcentaje): ");
    scanf("%f", &tasa);

    interes = capital * tasa / 100;
    monto = capital + interes;

    printf("El interes obtenido es: %.2f\n", interes);
    printf("El monto final es: %.2f\n", monto);

    return 0;
}
