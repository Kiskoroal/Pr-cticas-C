#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i = 1, a = 0, b = 1, c;
    printf("Introduzca el número de veces que quiere que se repita el ciclo: ");
    scanf("%d", &n);
    printf("%d, ", a);
    do {
        a = b;
        b = c;
        c = a + b;
        i == n - 1 ? printf("%d.", c) : printf("%d, ", c);
        i++;
    }while(i<n);
    system("pause");
    return 0;
}
