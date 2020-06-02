#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;
    int val_digitado = 0;

    printf("\n\nPrograma referente aos multiplos de 5: \n\n");
    printf("Digite o numero de multiplos de 5 q vc deseja: ");
    scanf("%i", &val_digitado);

    while(x <= val_digitado){

        printf("\n%i\n", x * 5);
        x = x + 1;

    }






    return 0;
}
