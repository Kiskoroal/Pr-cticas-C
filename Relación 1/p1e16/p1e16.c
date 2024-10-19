#include <stdio.h>
#include <stdlib.h>
#define G 9.8
#define PI 3.1416

int main(){
  float periodo, longitud;
  printf("Introduzca la longitud de su péndulo en m: ");
  scanf("%f", &longitud);
  periodo = 2 * PI * (sqrt((longitud/G)));
  printf("El periodo de su péndulo es %f. \n", periodo);
  system("pause");
  return 0;
}
