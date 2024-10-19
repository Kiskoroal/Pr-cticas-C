#include <stdio.h>
#include <stdlib.h>

int main() {
  int suma;
  for(int i = 1; i <= 10; i++){
    suma += i;
  }
  printf("%d\n", suma);
  system("pause");
  return 0;
}
