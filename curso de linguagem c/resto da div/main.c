#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2, resto_div;
    printf("Calculando o resto da divisao!!!\n\n");
    printf("Digite um numero: \n");
    scanf("%i", &num1);
    printf("Digite outro numero: \n");
    scanf("%i", &num2);
    resto_div = num1 % num2;

    printf("O resto da divisao entre os dois numeros e: %i", resto_div);


    return 0;
}
