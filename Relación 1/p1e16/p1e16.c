#include <stdio.h>
#include <stdlib.h>
#define G 9.8
#define PI 3.1416

int main(){
  float periodo, longitud;
  printf("Introduzca la longitud de su p�ndulo en m: ");
  scanf("%f", &longitud);
  periodo = 2 * PI * (sqrt((longitud/G)));
  printf("El periodo de su p�ndulo es %f. \n", periodo);
  system("pause");
  return 0;
}
