#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 50;

    /*
    operadores de atribuicao

    += soma (i = i+ 50) nesse caso
    -= subtracao (i = i -50) nesse caso
    *= multiplicacao (i = i*50) nesse caso
    /= divisao (i = i / 50) nesse caso
    %= resto da divisao (i = i%50)


    */

    printf("\n%i\n", i += 50); // o contrador vai aumentando 1 50 vezes ate o 100 ou seja I = 50 + 50 = 100
    printf("\n%i\n", i -= 50); // diminuiu- se 50 dos 100 que ja estavam calculados e armazenados em i, ou seja, i = i - 50, i = 100 - 50
    printf("\n%i\n", i*= 5); // nesse caso i = i * 5, ou seja, i = 50 * 5
    printf("\n%i\n", i /= 5); // nesse caso, i = i /5, i = 250 /5
    printf("\n%i\n", i %= 5); // i = i % 5, i = 50 % 5



    return 0;
}
