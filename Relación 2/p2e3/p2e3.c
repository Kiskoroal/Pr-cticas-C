#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float a, b, c, sol1, sol2, sol3;
  printf("Introduzca los coeficientes en el siguiente formato a, b, c: ");
  scanf("%f, %f, %f", &a, &b, &c);
  if(a == 0 & b != 0){
    sol3 = -c / b;
    printf("%f", sol3);
  } else if(a != 0 && (b == 0 || b != 0)) {
    if(pow(b,2)- (4*a*c) < 0){
      printf("No existe solución real para su ecuación");
    } else if(pow(b,2)- (4*a*c) == 0) {
      sol3 = -b / (2*a);
    } else {
      sol1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
      sol2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
      if(sol1<sol2) {
        printf("%f", sol1);
        printf("%f", sol2);
      } else {
        printf("%f", sol2);
        printf("%f", sol1);
      }
  }
  }
  system("pause");
  return 0;
}
