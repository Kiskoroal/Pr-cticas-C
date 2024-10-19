#include <stdio.h>
#include <stdlib.h>

int main() {
  int segundos, horas, minutos, segundosFinal;

  printf("Introduzca los segundos que desea representar en horas:minutos:segundos \n");
  scanf("%d", &segundos);

  horas =  segundos / 3600;
  minutos = (segundos % 3600)/60;
  segundosFinal = (segundos % 3600) % 60;
  printf("%d:%d:%d", horas, minutos, segundosFinal);
  system("pause");
  return 0;
}
