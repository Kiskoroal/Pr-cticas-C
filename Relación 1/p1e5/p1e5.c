#include <stdio.h>
#include <stdlib.h>

int main() {
  int entero;
  char caracter;
  float decimal;
  double real;

  printf("Introduzca un número entero, caracter, decimal y un double: \n");
  scanf("%d %c %f %lf", &entero, &caracter, &decimal, &real);

  printf("Su entero es %d, su caracter es %c, su decimal es %f y su dato tipo double es %lf. \n", entero, caracter, decimal, real);
  system("pause");
  return 0;
}
