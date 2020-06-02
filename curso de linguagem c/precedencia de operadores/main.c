#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 15 , b = 10, c = 5;
    float x = 0;

    x = a *b /c;
    printf(" o resultado e: %0.1f\n", x);

    x = a /b *c;
    printf(" o resultado e: %0.1f\n", x);


    // assim serve para as outras operações seguindo a regra da aula anterior


    return 0;
}
