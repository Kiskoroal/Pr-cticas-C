#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int b, e, potencia;
    printf("Introduzca su base y exponente en el siguiente formato b,e: ");
    scanf("%d,%d", &b, &e);
    potencia = pow(b, e);
    printf("El resultado de su potencia es %d. \n", potencia);
    system("pause");
    return 0;
}
