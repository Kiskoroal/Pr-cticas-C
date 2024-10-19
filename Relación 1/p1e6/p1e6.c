#include <stdio.h>
#include <stdlib.h>

int main() {

  char caracter;
  printf("Introduzca un caracter: ");
  scanf("%c", &caracter);

  printf("El código ASCII de su caracter es %d y su caracter siguiente es %c. \n", caracter, caracter + 1);
  system("pause");
  return 0;
}
