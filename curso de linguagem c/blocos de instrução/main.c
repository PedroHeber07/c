#include <stdio.h>
#include <stdlib.h>

int main(){
    double num = 10;
    char c = 'c';

    {
        printf("Bloco 1\n");
        double dinheiro = 3.55;
        printf(" o valor e: %0.1f\n", dinheiro);
    }

    printf("Digite o valor de um numero: \n");
    scanf("%lf", &num); //quando usar o double e necessario usar lf no scanf


    if( num == 50 )
            printf("O numero e verdadeiro");
    else{
            printf(" o numero e falso");
    }


    return 0;
}
