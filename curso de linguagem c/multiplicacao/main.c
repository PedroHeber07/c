#include <stdio.h>
#include <stdlib.h>

void main(){
    float num1, num2, mult;

    printf("Escreva um numero: ");
    scanf("%f", &num1);
    printf("Escreva outro numero: ");
    scanf("%f", &num2);
    mult = num1*num2;
    printf("O produto da operacao e: %0.1f", mult);


    return 0;
}
