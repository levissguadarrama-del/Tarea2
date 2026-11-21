#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d es divisor de %d\n", num2, num1);
    }
    else if (num1 != 0 && num2 % num1 == 0) {
        printf("%d es divisor de %d\n", num1, num2);
    }
    else {
        printf("Ninguno es divisor del otro\n");
    }

    return 0;
}
