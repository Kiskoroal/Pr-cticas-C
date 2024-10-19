#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int a, b,c;
  printf("Introduzca tres numeros enteros en el siguiente formato a, b, c: ");
  scanf("%d,%d,%d", &a, &b, &c);
  if(a > b && a > c && b < c) {
    printf("El número mayor es el %d y el menor %d", a, b);
  } else if(a>b&&a>c&&c<b) {
    printf("El número mayor es el %d y el menor %d", a, c);
  } else if(b>a&&b>c&&a<c) {
    printf("El número mayor es el %d y el menor %d", b, a);
  } else if(b>a&&b>c&&c<a) {
    printf("El número mayor es el %d y el menor %d", b, c);
  } else if(c>a&&c>b&&a<b) {
    printf("El número mayor es el %d y el menor %d", c, a);
  } else if(c>a&&c>b&&b<a) {
    printf("El número mayor es el %d y el menor %d", c, a);
  } else {
    printf("Los tres números son iguales");
  }
  return 0;
  system("pause");
}



