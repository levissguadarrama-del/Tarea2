#include <stdio.h>

int main() {
    int numeros[100];
    int i;

    for (i = 0; i < 100; i++) {
        numeros[i] = (i + 1) * 2;
    }

    printf("Los primeros 100 numeros pares son:\n");

    for (i = 0; i < 100; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
