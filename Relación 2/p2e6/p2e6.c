#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  printf("Introduzca un n�mero entero del 1-7: ");
  scanf("%d", &num);

  switch(num){
  case 1:
    printf("Lunes \n");
    break;
  case 2:
    printf("Martes \n");
    break;
  case 3:
    printf("Miercoles \n");
    break;
  case 4:
    printf("Jueves \n");
    break;
  case 5:
    printf("Viernes \n");
    break;
  case 6:
    printf("Sabado \n");
    break;
  case 7:
    printf("Domingo \n");
    break;
  default:
    printf("Su n�mero tiene que estar entre el 1-7. \n");
  }
  system("pause");
  return 0;
}
