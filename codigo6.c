#include <stdio.h>

int main() {
    float sueldo, aumento, nuevoSueldo;

    printf("Ingresa el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000) {
        aumento = sueldo * 0.15;
    }
    else {
        aumento = sueldo * 0.12;
    }

    nuevoSueldo = sueldo + aumento;

    printf("El sueldo con aumento es: %.2f\n", nuevoSueldo);

    return 0;
}
