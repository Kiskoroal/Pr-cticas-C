#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float celsius, fahrenheit;
  int x = 9, y = 5;

  printf("Introduzca los grados Celsius: \n");
  scanf("%f", &celsius);

  fahrenheit = celsius * x / y + 32.0;

  printf("%.2f GRADOS CELSIUS son %.2f grados FAHRENHEIT \n", celsius, fahrenheit);
  system("pause");
  return 0;
}
