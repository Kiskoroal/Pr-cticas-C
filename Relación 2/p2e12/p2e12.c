#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, i;
  printf("Introduzca el intervalo que desea imprimir en el siguiente formato (a, b): ");
  scanf("(%d, %d)", &a, &b);
  for(i = a + 1; i < b; i++){
    printf("%d\n", i);
  }
  system("pause");
  return 0;
}
