#include <stdio.h>

int main() {
    int numeros[100];
    int n, i, buscar;
    int contador = 0;

    printf("Cuantos numeros tendra el arreglo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingresa un numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Que numero deseas buscar: ");
    scanf("%d", &buscar);

    for (i = 0; i < n; i++) {
        if (numeros[i] == buscar) {
            contador++;
        }
    }

    printf("El numero aparece %d veces\n", contador);

    return 0;
}
