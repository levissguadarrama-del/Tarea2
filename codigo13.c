#include <stdio.h>

int main() {
    int numeros[100];
    int n, i, suma = 0;

    printf("Cuantos numeros vas a ingresar: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingresa un numero: ");
        scanf("%d", &numeros[i]);

        suma = suma + numeros[i];
    }

    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}
