#include <stdio.h>
#include <stdlib.h>

int main() {

  printf("Los datos de tipo entero tienen %d bytes, los caracteres %d bytes, los float %d bytes y los double %d bytes. \n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
  system("pause");
  return 0;
}
