#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2, soma;

    printf("Escreva um numero: ");
    scanf("%i", &num1);
    printf("Escreva outro numero: ");
    scanf("%i", &num2);
    soma = num1 + num2;

    printf("A soma dos numeros e: %i", soma);

    return 0;
}
