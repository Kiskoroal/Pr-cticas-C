#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b;
  char operacion;

  printf("Introduzca dos enteros en el siguiente formato a, b: ");
  scanf("%d, %d", &a, &b);
  fflush(stdin);
  printf("Introduzca el caracter de la operaci�n que quiere realizar: ");
  scanf("%c", &operacion);

  switch(operacion) {
  case '+':
    printf("Su suma es %d. \n", a + b);
    break;
  case '-':
    printf("Su resta es %d. \n", a - b);
    break;
  case '*':
    printf("Su producto es %d. \n", a * b);
    break;
  case '/':
    printf("Su divisi�n entera es %d. \n", a / b);
    break;
  default:
    printf("Su operaci�n elegida no existe. \n");
  }
  system("pause");
  return 0;
}
