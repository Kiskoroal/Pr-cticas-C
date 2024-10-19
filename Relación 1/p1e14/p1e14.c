#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float n;
  printf("Introduzca un número para realizar las operaciones: ");
  scanf("%f", &n);
  printf("El resultado de la primera operación es: %f. \n", pow(n, 2));
  printf("El resultado de la segunda operación es: %f. \n", pow(n, 3));
  printf("El resultado de la tercera operación es: %f. \n", pow(2, n));
  printf("El resultado de la cuarta operación es: %f. \n", pow(3, n));
  system("pause");
  return 0;
}
