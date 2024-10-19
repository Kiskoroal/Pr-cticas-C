#include <stdio.h>
#include <stdlib.h>

int main() {
  int hora, minuto, segundo;
  printf("Introduzca la hora en el formato h:m:s\n");
  scanf("%d:%d:%d", &hora, &minuto, &segundo);
  if(hora < 0 || hora > 23 || minuto > 59 || segundo < 0 || segundo > 59) {
    printf("La hora introducida no es correcta\n");
  } else {
    segundo++;
    if (segundo == 60){
      segundo = 0;
      ++minuto;
      if(minuto == 60) {
        minuto = 0;
        ++hora;
        if(hora == 24){
          hora=0;
        }
      }
    }
    printf("Hora actual %02d:%02d:%02d\n", hora, minuto, segundo);
  }
  system("pause");
  return 0;
}
