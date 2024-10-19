#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

int main(){
  float r, volumen, longitud, area;

  printf("Introduzca el radio en cm: ");
  scanf("%f", &r);

  volumen = (4.0/3)*PI*pow(r, 3);
  longitud = 2*PI* r;
  area = PI * pow(r, 2);

  printf("La longitud de su circunferencia es %f cm, el área %f cm^2 y el volumen %f cm^3. \n", longitud, area, volumen);
  system("pause");
  return 0;
}
