#include <stdio.h>

int main() {
    int numeros[100];
    int n, i;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    printf("Cuantos numeros ingresaras: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingresa un numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] > 0) {
            positivos++;
        }
        else if (numeros[i] < 0) {
            negativos++;
        }
        else {
            nulos++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
