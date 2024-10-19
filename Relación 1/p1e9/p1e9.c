#include <stdio.h>
#include <stdlib.h>

int main() {

  int a, b, c;
  float media;

  printf("Introduzca su primer valor: ");
  scanf("%d", &a);
  printf("Introduzca su segundo valor: ");
  scanf("%d", &b);
  printf("Introduzca su tercer valor: ");
  scanf("%d", &c);

  media = (float)(a+b+c)/3;
  printf("La media de sus valores %d, %d, %d es %f. \n", a, b, c, media);
  system("pause");
  return 0;
}
