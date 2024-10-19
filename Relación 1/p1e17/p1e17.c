#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float x, a, b, c, d, resultado;
  printf("Introduzca el valor de x, a, b, c, d en ese mismo orden: ");
  scanf("%f %f %f %f %f", &x, &a, &b, &c, &d);

  resultado = a*pow(x, 3) + b*pow(x, 2) + c * x + d;
  printf("El resultado del polinomio ax^3 + bx^2 + cx + d es %f. \n", resultado);
  system("pause");
  return 0;
}
