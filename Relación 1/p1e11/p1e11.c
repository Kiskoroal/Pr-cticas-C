#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main(){
  float xl, f, l;

  printf("Introduzca el valor de la inductancia: ");
  scanf("%f", &l);
  printf("Introduzca el valor de la frecuencia: ");
  scanf("%f", &f);
  xl = 2 * PI * f * l;
  printf("El valor de la reactancia inductiva es %f", xl);
  system("pause");      //calcular el valor de la reactancia inductiva
  return 0;
}
