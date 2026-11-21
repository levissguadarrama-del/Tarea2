#include <stdio.h>

int main() {
    int n, i;
    int producto = 1;

    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        producto = producto * i;
    }

    printf("El producto es: %d\n", producto);

    return 0;
}
