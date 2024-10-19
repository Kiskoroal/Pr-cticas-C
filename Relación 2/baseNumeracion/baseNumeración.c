#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, num, decimal=0, potencia=1, base, digito;

  printf("Convertir de base 2 a 9 un numero decimal\n");
  do {
    printf("Introduzca la base del numero [2-9]");
    scanf("%d", &base);
  } while(base < 2 || base > 9);
  do {
    printf("Introduzca el numero en base %d [>=0]", base);
    scanf("%d", &num);
  } while(num < 0);

  n = num;
  potencia = 1;
  decimal = 0;
  while(n>0){
    digito = n % 10;
    decimal += digito * potencia;
    potencia *= base;
    n /= 10;
  }
  printf("El número %d en base %d es %d en decimal\n", num, base, decimal);
  system("pause");
  return 0;
}
