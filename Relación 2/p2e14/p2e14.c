#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, i = 2, factorial = 1;

  printf("Introduzca el número entero positivo al que desea calcular el factorial: ");
  scanf("%d", &a);
  if(a == 1 || i == 0) {
    printf("El factorial es 1. \n");
  }else {
    while(i <= a){
      factorial*=i;
      i++;
  }
  printf("El factorial es %d. \n", factorial);
  }
  system("pause");
  return 0;
}
