#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int valordigitado = 0;

    printf("\n\n Multiplos de dez 10!!\n\n");

    printf("\n\n\nDigite a quantidade de vezes, que deseja que o programa efetue a multiplicacao: \n\n");
    scanf("%i", &valordigitado);

    while(x <= valordigitado){
            printf("\n%i\n", x * 10);
            x = x + 1;

    }



    return 0;
}
