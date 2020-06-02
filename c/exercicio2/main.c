#include <stdio.h>
#include <stdlib.h>

int main(){
int num1, num2, num3, num4;

//Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores.
printf("Digite o numero 1 : \n");
scanf("%d", &num1);
printf("Digite o numero 2 : \n");
scanf("%d", &num2);
printf("Digite o numero 3 : \n");
scanf("%d", &num3);
printf("Digite o numero 4 : \n");
scanf("%d", &num4);
if((num1 > num2) && (num1 > num3)&& (num1 > num4)){
    printf("Os menores numeros sao: %d, %d, %d\n", num2, num3, num4);
} else if((num2 > num1) && (num2 > num3)&& (num2 > num4)){
    printf("Os menores numeros sao: %d, %d, %d\n", num1, num3, num4);
} else if((num3 > num1) && (num3 > num2)&& (num3 > num4)){
    printf("Os menores numeros sao: %d, %d, %d\n", num1, num2, num4);
} else {
    printf("Os menores numeros sao: %d, %d, %d\n", num1, num2, num3);
}
    return 0;
}
