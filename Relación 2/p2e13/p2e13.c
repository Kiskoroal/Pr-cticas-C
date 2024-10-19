#include <stdio.h>
#include <stdlib.h>

int main() {
  float a, media, suma;
  int i = 0;
  do {
    printf("Introduzca un número ");
    scanf("%f", &a);
    if (a > 0) {
     suma+=a;
     i++;
     media = suma/i;
    }
  } while(a>0);
  printf("Su media es %f. \n", media);
  system("pause");
  return 0;
}
