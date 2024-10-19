#include <stdio.h>
#include <stdlib.h>

int main() {
  int suma, i = 1;
  while(i<= 1000){
    i%2 == 0 ? suma+=i : suma;
      i++;
  }
  printf("%d", suma);
  system("pause");
  return 0;
}
