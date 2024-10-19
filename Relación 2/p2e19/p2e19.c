#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, contNum = 0;
    char num[1000];
    printf("Introduzca un número:");
    scanf("%s", &num);
    while(num[i] != '\0') {
        contNum++;
        i++;
    }
    printf("Su número tiene %d cifras. \n", contNum);
    system("pause");
    return 0;
}
