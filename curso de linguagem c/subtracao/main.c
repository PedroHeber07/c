#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2, sub;

    printf("Escreva um numero: ");
    scanf("%i", &num1);
    printf("Escreva outro numero: ");
    scanf("%i", &num2);
    sub = num1 - num2;
    printf("a subtracao dos numeros e: %i", sub);

    return 0;
}
