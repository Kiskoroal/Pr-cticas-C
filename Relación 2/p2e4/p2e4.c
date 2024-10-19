#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;
  printf("Introduzca dos n�meros enteros: ");
  scanf("%d %d", &a, &b);
  if(a % b == 0) {
    printf("a / b es divisible");
  } else {
    printf("a / b no es divisible");
  }
  if(b % a == 0) {
      printf("b / a es divisible");
  } else {
      printf("b/ a no es divisible");
  }
  return 0;
  system("pause");
}
