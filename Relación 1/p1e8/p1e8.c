#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;


  printf("Introduzca su primer entero: ");
  scanf("%d", &a);
  printf("Introduzca su segundo entero: ");
  scanf("%d", &b);

  printf("El resultado de la suma es %d. \n", a + b);
  printf("El resultado de la resta es %d. \n", a - b);
  printf("El resultado de la multiplicaci�n es %d. \n", a * b);
  printf("El resultado de la divisi�n es %f. \n", (float)a / b);
  printf("El resto de su divisi� es %d. \n", a % b);
  printf("Si invertimos los operandos en aquellas operaciones que no conmutan el resultado de la resta es %d, el resultado de la divisi�n es %f y el resto %d. \n", b-a, (float)b/a, b%a);
  system("pause");
  return 0;
}
