#include <stdio.h>
#include <stdlib.h>

void main(){
    float num1, num2, div;

    printf("Escreva um numero: ");
    scanf("%f", &num1);
    printf("Escreva outro numero: ");
    scanf("%f", &num2);
    div = num1 / num2;
    printf("o resultado da divisao e: %0.1f", div);

    return 0;
}
