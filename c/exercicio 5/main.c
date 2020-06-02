#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2;
    float m;

    printf("Calculo da media!!!\n");
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);
    m = (num1 + num2) / 2.0;
    if(m >= 7.0){
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    printf("Sua media foi: %.2f\n\n", m);
}
