#include <stdio.h>
#include <stdlib.h>

int main(){
  float salarioBruto, euros, horas, salarioNeto;
  printf("Introduzca las horas que trabaja diariamente: ");
  scanf("%f",&horas);
  printf("Introduzca el pago sobre horas trabajadas: ");
  scanf("%f", &euros);
  salarioBruto =(euros * horas) * 30;
  salarioNeto = salarioBruto * 0.9;
  printf("Su salario bruto es de %.2f euros y su salario neto es de %.2f euros. \n", salarioBruto, salarioNeto);
  system("pause");
  return 0;
}
