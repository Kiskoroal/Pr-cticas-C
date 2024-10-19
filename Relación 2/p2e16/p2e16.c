#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0, i = 0,t = 0;
    printf("Tabla del 0. \n");
    do {
        printf("%d x %d = %d\n",a , i, a * i);
        i++;
        if(i == 11){
            i = 0;
            a++;
            t++;
            t <= 10 ? printf("Tabla del %d.\n", t) : NULL;
        }
    }while(t<=10);
    system("pause");
    return 0;
}

