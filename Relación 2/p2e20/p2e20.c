#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, i = 0, contDiv=0, div;
  printf("Introduzca su n�mero: ");
  scanf("%d", &num);
  while(i < num){
    i++;
    div = num % i;
    if(div == 0){
      contDiv++;
    }
  }
  if(contDiv == 2){
    printf("Su n�mero es primo");
  } else if(contDiv > 2) {
    printf("Su n�mero no es primo");
  }
  system("pause");
  return 0;
}
