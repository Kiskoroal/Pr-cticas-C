#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int num;
  printf("Introduzca un valor entero positivo: ");
  scanf("%d", &num);

  num % 2 == 0 ? printf("Su n�mero es par") : printf("Su n�mero es impar");
  system("pause");
  return 0;
}
