#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float x1, x2, y1, y2, distancia;
  printf("Introduzca las cordenadas de su primer punto. Primero x luego y \n");
  scanf("%f %f", &x1, &y1);
  printf("Introduzca las cordenadas de su segundo punto. Primero x luego y \n");
  scanf("%f %f", &x2, &y2);
  distancia = sqrt((pow((x2-x1), 2) + pow((y2-y1), 2)));
  printf("La distancia entre los puntos (%f, %f) y (%f, %f) es %f. \n", x1,y1,x2,y2,distancia);
  system("pause");
  return 0;
}
