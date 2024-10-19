#include <stdio.h>
#include <stdlib.h>

int main() {
  int d, m, a;
  printf("Introduzca una fecha en el siguiente formato dd:mm:aa ");
  scanf("%d:%d:%d", &d, &m, &a);

  if(m >= 1 && m <=12) {
    if( (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 12 || m == 10) && d <= 31 && d>0){
      printf("Su fecha es válida. \n");
    } else if (m == 2 && ((d <= 28 && d>0) || (a % 4 == 0 && a % 100 != 0) && (d < 29 && d > 0))) {
      printf("Su fecha es válida \n");
    } else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30 && d>0) {
      printf("Su fecha es válida. \n");
    } else {
      printf("Su fecha es incorrecta. \n");
    }
  } else {
    printf("Su fecha es incorrecta. \n");
  }
  system("pause");
  return 0;
}
