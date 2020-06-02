#include <stdio.h>
#include <stdlib.h>

void main(){
    float num1, num2, soma, sub, div, mult;

    printf("Seja bem vindo a calculadora 1.0!!!\n");
    printf("Digite o primeiro numero: \n\n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n\n");
    scanf("%f", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    mult = num1 * num2;

    printf(" A soma dos numeros e: %0.1f\n", soma);
    printf(" A subtracao dos numeros e: %0.1f\n", sub);
    printf(" O resultado da divisao dos numeros e: %0.1f\n", div);
    printf(" O resultado da multiplicacao dos numeros e: %0.1f\n", mult);




    return 0;
}
